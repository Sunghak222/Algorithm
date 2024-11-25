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
    vector<vector<int>> a(n),b(n);
    int temp;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> temp;
            a[i].pb(temp);
        }
    }
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> temp;
            b[i].pb(temp);
        }
    }
    int nm = n*m;
    vector<int> pos1i(nm),pos1j(nm),pos2i(nm),pos2j(nm);
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            int x = a[i][j]-1;
            int y = b[i][j]-1;
            pos1i[x] = pos2i[y] = i;//pos1 = num의 original position
            pos1j[x] = pos2j[y] = j;//pos2 = num의 changed position
        }
    }
    rep(i,0,nm-1)
    {
        
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