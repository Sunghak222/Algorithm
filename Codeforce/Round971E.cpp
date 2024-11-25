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

ll getSum(ll lo, ll hi)
{
    ll a = lo+hi;
    ll b = hi-lo+1;
    
    if (a % 2 == 0)
    {
        a/=2;
    }
    else if (b%2 == 0)
    {
        b/=2;
    }
    return a*b;
}
ll getAns(ll lo, ll mid, ll hi)
{
    return getSum(lo,mid)-getSum(mid+1,hi);
}
void solve()
{
    ll n,k;
    cin >> n >> k;

    ll lo((k+n+k-1)/2),hi(n+k-1);
    ll ans = abs(getAns(k,lo,hi));
    ll prev = ans;
    while (lo+1 < hi)
    {
        ll mid = (lo+hi)/2;
        ll temp = getAns(k,mid,n+k-1);
        ans = min(ans,abs(temp));
        if (temp == 0)
        {
            cout << temp << '\n';
            return;
        }
        else if (temp < 0)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    ans = min(ans,abs(getAns(k,lo,n+k-1)));
    ans = min(ans,abs(getAns(k,hi,n+k-1)));
    ans = min(ans,abs(getAns(k,(lo+hi)/2,n+k-1)));
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