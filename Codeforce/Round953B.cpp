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
    ll n,a,b;
    cin >> n >> a >> b;
    ll k = b-a;
    ll ans(0);
    ll p1,p2;
    if (k > 0)
    {
        if (k >= n)
        {
            k = n;
        }
        p1 = (b+(b-k+1));
        p2 = (b-(b-k+1)+1);
        if (p1%2 == 0) p1/=2;
        else if (p2%2 == 0) p2/=2;
        ans += p1*p2;
        //ans += (b+(b-k+1))/2*(b-(b-k+1)+1);
        ans += a*(n-k);
    }
    else
    {
        ans += a*n;
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