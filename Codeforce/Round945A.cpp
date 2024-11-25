#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
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
    int a,b,c;
    cin >> a >> b >> c;
    if ((a+b+c)%2 == 1) cout << -1 << '\n';
    else
    {
        if (a > b && a > c)
        {
            if (a > b+c)
            {
                cout << b+c << '\n';
                return;
            }
        }
        else if (b > a && b > c)
        {
            if (b > a+c)
            {
                cout << a+c << '\n';
                return;
            }
        }
        else if (c > a && c > b)
        {
            if (c > a+b)
            {
                cout << a+b << '\n';
                return;
            }
        }
        cout << (a+b+c)/2 << '\n';
        return;
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