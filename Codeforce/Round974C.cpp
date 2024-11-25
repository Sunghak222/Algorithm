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
    int arr[200002];
    cin >> n;

    ll sum(0);
    rep(i,0,n-1)   //같은 양의 골드 고려. {2,2,2,2,2,2}. 12/6/2=1. 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (n < 3)
    {
        cout << -1 << '\n';
        return;
    }
    sort(arr,arr+n);
    ll nth = arr[n/2];

    ll x = nth * 2 * n + 1;

    ll ans;
    if (x >= sum) ans = x - sum;
    else ans = 0;
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