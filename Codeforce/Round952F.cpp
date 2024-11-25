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

ll h,n;
ll arr[200001],cool[200001];

bool check(ll mid)
{
    ll dmg(0);
    rep(i,0,n-1)
    {
        dmg += arr[i]*((mid-1)/cool[i]+1);
        if (dmg >= h) return true;
    }
    return false;
}
void solve()
{
    cin >> h >> n;
    
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    rep(i,0,n-1)
    {
        cin >> cool[i];
    }

    ll lo(1),hi(45000000000);
    while (lo+1 < hi)
    {
        ll mid = (lo+hi)/2;
        if (check(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    if (check(lo))
    {
        cout << lo << '\n';
        return;
    }
    if (check(hi))
    {
        cout << hi << '\n';
        return;
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