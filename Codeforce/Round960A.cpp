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
    int n;
    cin >> n;
    int arr[53];
    int mx(0),num(0);
    map<int,int> mp;
    for (int i = 0; i < n; i++) //rep(i,0,n-1)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (arr[i] > mx)
        {   
            mx = arr[i];
        }
    }
    sort(arr,arr+n);

    per(i,n-1,0)
    {
        if (mp[arr[i]] % 2 == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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