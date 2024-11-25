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
    int n;
    cin >> n;
    rep(i,1,n-2)
    {
        cout << i << ' ' << i << '\n';
    }
    cout << n-1 << ' ' << n << '\n';
    cout << n << ' ' << n << '\n';
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