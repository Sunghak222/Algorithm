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

ll n,m;
ll arr[200005];

void solve()
{
    cin >> n >> m;
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    sort(arr,arr+n);
    arr[n] = -1;
    for (ll i = 0; i < n;)
    {
        ll j = i;
        while (arr[j] == arr[i]) j++;
        ll l = j;
        while (arr[l] == arr[i]+1) l++;
        for (ll c = 0; c <= j-i; c++)
        {
            if (c*arr[i] > m) continue;

            ll val = c*arr[i];
            ll t = min((m-val)/(arr[i]+1),l-j);
            val += t*(arr[i]+1);
            
            ans = max(ans,val);
        }
        i = j;
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