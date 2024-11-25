#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int arr[200001];

void solve()
{
    int n,q;
    cin >> n >> q;
    map<int,vector<int>> mp;
    mp[0].push_back(0);
    rep(i,1,n)
    {
        cin >> arr[i];
        arr[i] ^= arr[i-1];
        mp[arr[i]].push_back(i);
    }
    while (q--)
    {
        int l,r;
        cin >> l >> r;
        if (arr[r] == arr[l-1])
        {
            cout << "YES\n";
            continue;
        }
        auto pL=--lower_bound(mp[arr[l-1]].begin(),mp[arr[l-1]].end(),r);
        auto pR=lower_bound(mp[arr[r]].begin(),mp[arr[r]].end(),l);
        cout << (pL>pR?"YES\n":"NO\n");
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