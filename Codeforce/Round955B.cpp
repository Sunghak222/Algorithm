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
    int x,y,k;
    cin >> x >> y >> k;
    int trial(0);
    while (trial < k)
    {
        if (x == 1) break;
        int rem = k-trial;
        int add = y-(x%y); //몇번더해야 나눠지는지 
        if (rem > add)
        {
            x += add;
            while (x%y == 0)
            {
                x/=y;
            }
            trial += add;
        }
        else if (rem == add)
        {
            x += add;
            while (x%y == 0)
            {
                x/=y;
            }
            cout << x << '\n';
            return;
        }
        else
        {
            x += rem;
            cout << x << '\n';
            return;
        }
    }

    int rem = k - trial;
    x += rem%(y-1);

    cout << x << '\n';
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