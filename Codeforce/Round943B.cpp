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

void solve()
{
    int n,m;
    string a,b;
    cin >> n >> m >> a >> b;
    int idx(0);
    int ans(0);
    rep(i,0,n-1)
    {
        char c = a[i];
        while (idx < m)
        {
            if (b[idx] == c)
            {
                ans++;
                idx++;
                break;
            }
            idx++;
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