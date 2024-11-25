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
    int n,m;
    int a[200001],b[200001];
    map<int,int> mp,d;

    cin >> n;
    rep(i,0,n-1)
    {
        cin >> a[i];
    }
    rep(i,0,n-1)
    {
        cin >> b[i];
        mp[b[i]]++;
        if (a[i] != b[i])
        {
            d[b[i]]++;
        }
    }
    cin >> m;

    int op;
    rep(i,0,m-1)
    {
        cin >> op;
        if (d[op] > 0)
        {
            d[op]--;
        }
    }
    
    bool flag = true;
    for (auto i : d)
    {
        if (i.second > 0)
        {
            flag = false;
        }
    }
    if (!flag)
    {
        cout << "NO\n";
        return;
    }
    if (mp[op] == 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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