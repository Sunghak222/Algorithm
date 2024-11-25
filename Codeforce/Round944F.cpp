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
    ll r;
    cin >> r;
    ll height = r;
    ll ans(0);
    for (ll i = 0; i <= r; i++)
    {
        while (i*i+height*height >= (r+1)*(r+1))
        {
            height--;
        }
        ll temp = height;
        while (i*i+temp*temp >= r*r && temp > 0)
        {
            temp--;
            ans++;
        }
    }
    cout << ans*4 << '\n';
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