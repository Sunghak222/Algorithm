#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

ll n,k;
ll arr[200001];

bool check(ll mid)
{
    ll sum(0);
    rep(i,0,n-1)
    {
        if (mid > arr[i])
        {
            sum += mid - arr[i];
        }
        if (arr[i] > mid)
        {
            return true;
        }
        if (sum > k)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    cin >> n >> k;
    ll ans(0);
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll sum(0),num(arr[0]),curr(arr[0]);
    
    ll lo(0),hi(1500000000000);
    while (lo+1 < hi)
    {
        ll mid = (lo+hi)/2; 
        if (check(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    ll sm(0);
    int cnt(0);
    rep(i,0,n-1)
    {
        if (arr[i] < lo)
        {
            sm += lo - arr[i];
        }
        if (arr[i] > lo)
        {
            cnt++;
        }
    }
    ans += n*(lo-1)+1;
    ans += cnt;
    if (k > sm)
    {
        ans += k-sm;
    }
    /* if (k > sm)
    {
        if (n-cnt < k-sm)
        {
            ans += n*lo+1;
            ans += 
        }
    } */
    //ans += n*(lo-1)+1;
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