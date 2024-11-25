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

ll n,k;
ll a[200005];

void solve()
{
    cin >> n >> k;
    ll alice(0), bob(0);
    rep(i,0,n-1) 
    {
        cin >> a[i];
    }

    sort(a,a+n,greater<int>());

    rep(i,0,n-1)
    {
        if (i%2) bob += a[i];
        else alice += a[i];
    }

    for (int i = 0; i < n-1; i+=2)
    {
        ll aa = a[i];
        ll bb = a[i+1];
        ll diff = aa-bb;
        
        if (k >= diff)
        {
            k -= diff;
            bob += diff;
        }
        else
        {
            bob += k;
            k = max(0ll,k-diff);
        }
        if (k <= 0)
        {
            break;
        }
    }
    cout << alice-bob << '\n';
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