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
    int x,y;
    cin >> x >> y;
    int ans(0);

    if (y == 0)
    {
        ans = (x+14)/15;
        cout << ans << '\n';
        return;
    }
    if (x == 0)
    {
        ans = (y+1)/2;
        cout << ans << '\n';
        return;
    }
    int temp = (y+1)/2;
    if (y % 2 == 0)
    {
        if (x > temp*7)
        {
            ans += temp;
            x -= temp*7;
            ans += (x+14)/15;
        }
        else
        {
            ans = temp;
        }
    }
    else
    {
        if (x > (temp-1)*7+11)
        {
            x -= (temp-1)*7+11;
            ans += temp;
            ans += (x+14)/15;
        }
        else
        {
            ans = temp;
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