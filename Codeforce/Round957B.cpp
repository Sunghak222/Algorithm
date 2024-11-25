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
    int n,k;
    int a[210000];
    cin >> n >> k;

    int mx(0),slice(0);
    rep(i,0,k-1)
    {
        cin >> a[i];
        mx = max(a[i],mx);
        slice += a[i]-1;
    }
    slice -= (mx-1);
    ll ans(0);
    ans += slice + (n-mx);
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