#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; j >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve()
{
    long long n,c,k;
    vector<int> v;
    cin >> n >> c;
    long long ans = ((c+1) * (c+2))/2;
    long long odd(0),even(0);
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
        if (k%2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        ans -= (c-k)+1;
        ans -= (k/2)+1;
    }
    if (odd > 0) ans += (odd*(odd+1))/2;
    if (even > 0) ans += (even*(even+1))/2;
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