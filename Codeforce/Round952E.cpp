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

ll num[3];
ll k;

ll getans(int a, int b, int c)
{
    ll tp = 1;
    int nnn[3] = {a,b,c};
    sort(nnn,nnn+3);
    rep(i,0,2)
    {
        int d = num[i] - nnn[i];
        if (d < 0)
        {
            return 0;
        }
        else
        {
            tp *= d+1;
        }
    }
    return tp;
}
bool check(ll mid, ll i, ll j)
{
    if (mid*i*j < k)
    {
        return false;
    }
    return true;
}
void solve()
{
    ll ans(0);
    cin >> num[0] >> num[1] >> num[2] >> k;

    sort(num,num+3);

    rep(i,1,num[0])
    {
        rep(j,1,num[1])
        {
            ll lo(1),hi(num[2]+1);
            while (lo+1 < hi)
            {
                ll mid = (lo+hi)/2;
                if (check(mid,i,j))
                {
                    hi = mid;
                }
                else
                {
                    lo = mid;
                }
            }
            if (lo*i*j == k)
            {
                ans = max(ans,getans(i,j,lo));
            }
            if (hi*i*j == k)
            {
                ans = max(ans,getans(i,j,hi));
            }
        }
    }
    cout << ans << '\n';
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