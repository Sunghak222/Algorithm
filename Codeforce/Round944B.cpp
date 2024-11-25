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
    if (sz == 1)
    {
        cout << "NO\n";
        return;
    }
    char a = s[0];
    bool no = true;
    rep(i,1,sz-1)
    {
        if (s[i] != a)
        {
            no = false;
        }
    }
    if (no)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    rep(i,1,sz-1)
    {
        cout << s[i];
    }
    cout << s[0] << '\n';
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