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
    ll x;
    cin >> x;
    ll num[33] = {0};
    ll ans[33] = {0};
    for (ll i = 0; i <= 31; i++)
    {
        if ((x & (1ll<<i)) != 0) num[i] = 1;
    }
    for (ll i = 0; i <= 30; i++)
    {
        if (num[i] == 1 && num[i+1] == 1)
        {
            ans[i] = -1;
            while (num[i] == 1)
            {
                num[i] = 0;
                i++;
            }
            num[i] = 1;
            ans[i] = 1;
            i--;
        }
        else if (num[i] == 1 && num[i+1] != 1)
        {
            ans[i] = 1;
            i++;
        }
    }
    ll cnt(0);
    for (ll j = 31; j >= 0; j--)
    {
        if (num[j] == 1)
        {
            cnt = j;
            break;
        }
    }
    cout << cnt+1 << '\n';
    rep(idx,0,cnt)
    {
        cout << ans[idx] << ' ';
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