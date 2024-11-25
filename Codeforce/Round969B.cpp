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
    cin >> n >> m;
    int mx(0);
    rep(i,0,n-1)
    {
        int temp;
        cin >> temp;
        if (mx < temp)
        {
            mx = temp;
        }
    }
    vector<int> v;
    rep(i,0,m-1)
    {
        char op;
        int l,r;
        cin >> op >> l >> r;
        if (l <= mx && mx <= r)
        {
            if (op == '+')
            {
                mx++;
            }
            else
            {
                mx--;
            }
        }
        v.pb(mx);
    }
    int sz = v.size();
    rep(i,0,sz-1)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
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