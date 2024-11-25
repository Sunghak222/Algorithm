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
    int l,r,le,ri;
    cin >> l >> r >> le >> ri;
    
    bool room1[200] = {false};
    bool room2[200] = {false};
    rep(i,l,r)
    {
        room1[i] = true;
    }
    rep(i,le,ri)
    {
        room2[i] = true;
    }

    vector<int> v;
    int same(0);
    rep(i,1,100)
    {
        if (room1[i]&&room2[i])
        {
            same++;
            v.pb(i);
        }
    }

    if (same != 0)
    {
        same--;
        int sz = v.size();
        if (room1[v[0]-1] || room2[v[0]-1])
        {
            same++;
        }
        if (room1[v[sz-1]+1] || room2[v[sz-1]+1])
        {
            same++;
        }
    }
    else
    {
        same = 1;
    }
    cout << same << '\n';
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