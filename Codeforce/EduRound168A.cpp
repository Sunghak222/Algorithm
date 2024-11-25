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
    string s;
    cin >> s;
    int sz = s.size();
    if (sz == 1)
    {
        cout << s;
        rep(i,0,5)
        {
            string t = "";
            t += (char)('a'+i);
            if (t != s)
            {
                cout << t;
                return;
            }
        }
    }

    bool used = false;
    cout << s[0];
    rep(i,1,sz-1)
    {
        if (s[i] == s[i-1] && !used)
        {
            char t = (s[i] == 'z') ? (s[i]-1) : 'z';
            cout << t;
            used = true;
        }
        cout << s[i];
    }
    if (!used)
    {
        char t = (s[sz-1] == 'z') ? (s[sz-1]-1) : 'z';
        cout << t;
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
        cout << '\n';
    }
}