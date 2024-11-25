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
    string s;
    cin >> s;
    int sz = s.size();
    int cnt(0);
    bool used = false;
    bool zero = false;
    rep(i,1,sz-1)
    {
        if (s[i-1] == '0' && s[i] == '1')
        {
            if (!used)
            {
                used = true;
                continue;
            }
            if (used)
            {
                cnt++;
            }
        }
        if (s[i-1] == '1' && s[i] == '0')
        {
            cnt++;
        }
    }
    cout << cnt+1 << '\n';
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