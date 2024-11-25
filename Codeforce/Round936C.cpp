#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
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
    vector<vector<int>> input(n);
    rep(i,0,n-2)
    {
        int v,u;
        cin >> v >> u;
        v--,u--;
        input[v].pb(u);
        input[u].pb(v);
    }
    auto check = [&](int x)
    {
        int res = 0;
        auto dfs = [&](auto self, int v, int p) -> int
        {
            int sz = 1;
            for (int u : input[v])
            {
                if (u == p) continue;
                sz += self(self,u,v);
            }
            if (sz >= x && v != p)
            {
                res++;
                sz = 0;
            }
            return sz;
        };
        int t = dfs(dfs,0,0);
        return (res > k || (t >= x && res == k) ? true : false);
    };
    int lo = 1, hi = n;
    while (lo+1 < hi)
    {
        int mid = (lo+hi)/2;
        if (check(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << lo << '\n';
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