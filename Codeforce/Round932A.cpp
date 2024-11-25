#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; j >= k; i--)
#define pb push_back

using namespace std;

void solve()
{
    int n;
    string ss;
    cin >> n >> ss;
    string s = ss;
    reverse(ss.begin(),ss.end());
    if (n % 2 == 0)
    {
        if (s <= ss)
        {
            cout << s << '\n';
            return;
        }
        else
        {
            cout << ss << s << '\n';
            return;
        }
    }
    else
    {
        if (s <= ss)
        {
            cout << s << ss << '\n';
            return;
        }
        else
        {
            cout << ss << '\n';
            return;
        }
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