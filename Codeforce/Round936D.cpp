#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int m,n;
    cin >> n >> m;
    long long ans(0);
    int a[200001];
    int b[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    long long plus(0);
    long long mn(1e16);
    for (int i = n-1; i >= 0; i--)
    {
        if (i < m)
        {
            mn = min(mn,plus+a[i]);
            plus += b[i];
            continue;
        }
        if (a[i] <= b[i])
        {
            ans += a[i]+plus;
            plus = 0;
        }
        else
        {
            plus += b[i];
        }
    }
    ans += mn;
    cout << ans << '\n';
}
/* 
1
5 4
1 100 100 100 1
1 1 1 1 3
 */
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