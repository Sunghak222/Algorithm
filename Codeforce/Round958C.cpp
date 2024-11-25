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
    ll n;
    cin >> n;

    ll one(0),temp(n),idx(0);

    ll bin[70] = {0};
    vector<ll> ans;

    while (temp != 0)
    {
        if (temp % 2 == 1)
        {
            one++;
            bin[idx] = 1;
        }
        else
        {
            bin[idx] = 0;
        }
        temp /= 2;
        idx++;
    }
    if (one == 1)
    {
        cout << 1 << '\n' << n << '\n';
        return;
    }
    ans.pb(n);
    rep(i,0,idx-1)
    {
        if (bin[i] == 1)
        {
            ll num(0);
            ll plus(1);
            rep(j,0,idx-1)
            {
                if (j == i)
                {
                    plus *= 2;
                    continue;
                }
                if (bin[j] == 1)
                {
                    num += plus;
                }
                plus *= 2;
            }
            ans.pb(num);
        }
    }

    cout << one+1 << '\n';
    int sz = ans.size();
    per(i,sz-1,0)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    /* per(i,sz-1,1)
    {
        if ((ans[i] | ans[i-1]) != n)
        {
            cout << "OH";
        }
    } */
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