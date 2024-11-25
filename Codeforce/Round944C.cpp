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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int temp = a;
    bool one = false;
    while (temp != b)
    {
        if (temp == c || temp == d)
        {
            if (!one)
            {
                one = true;
            }
            else if (one)
            {
                cout << "NO\n";
                return;
            }
        }
        if (temp == 12)
        {
            temp = 1;
            continue;
        }
        temp++;
    }
    if (one)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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