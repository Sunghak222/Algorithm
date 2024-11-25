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
    int n,l,r;
    cin >> n >> l >> r;
    int arr[100004];
    arr[0] = 0;
    rep(i,1,n)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int ans(0);
    int lo(0),hi(1),curr(0);
    while (lo <= n && hi <= n)
    {
        curr = arr[hi]-arr[lo];
        if (curr >= l && curr <= r)
        {
            ans++;
            lo = hi;
            hi++;
        }
        else if (curr < l)
        {
            hi++;
        }
        else if (curr > r)
        {
            if (hi-lo == 1)
            {
                hi++;
                lo++;
            }
            else
            {
                lo++;
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