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
    int x,y,k;
    cin >> x >> y >> k;
    vector<int> vx,vy;

    if (k % 2)
    {
        vx.pb(x);
        vy.pb(y);
        k -= 1;
    }
    rep(i,1,k/2)
    {
        vx.pb(x+i);
        vx.pb(x-i);
        
        vy.pb(y+i);
        vy.pb(y-i);
    }
    int sz = vx.size();
    rep(i,0,sz-1)
    {
        cout << vx[i] << ' ' << vy[i] << '\n';
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