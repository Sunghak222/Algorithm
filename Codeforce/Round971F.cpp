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
    ll n,q;
    cin >> n >> q;
    ll arr[400003],pref[400003];
    ll sum(0);
    rep(i,0,n-1) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    rep(i,0,n-1) arr[i+n] = arr[i];
    pref[0] = arr[0];
    rep(i,1,2*n-1) pref[i] = pref[i-1] + arr[i];
    

    rep(i,0,q-1)
    {
        ll l,r;
        ll ans = 0;
        cin >> l >> r;
        l--;r--;
        int c1 = l/n;
        int c2 = r/n;
        if (c1 == c2)
        {
            if (c1+(l%n)-1 < 0) ans += pref[c2+(r%n)];
            else ans += pref[c2+(r%n)] - pref[c1+(l%n)-1];
        }
        else if (c2 > c1)
        {
            if (c1+(l%n)-1 < 0) ans += sum;
            else ans += pref[c1+n-1] - pref[c1+(l%n)-1];
            ans += (c2-c1-1) * sum;
            ans += pref[c2+(r%n)] - pref[c2-1];
        }
        cout << ans << '\n';
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