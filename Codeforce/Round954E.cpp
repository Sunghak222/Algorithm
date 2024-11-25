#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[100001];
    map<int,vector<int>> mp;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        mp[arr[i]%k].pb(arr[i]/k);
    }

    int rem = n%2;
    for (auto it : mp)
    {
        vector<int> &temp = it.second;
        int sz = temp.size();
        sort(temp.begin(),temp.end());
        if (sz%2)
        {
            if (rem == 0)
            {
                cout << -1 << '\n';
                return;
            }
            rem--;
            if (sz == 1) continue;
            

        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}