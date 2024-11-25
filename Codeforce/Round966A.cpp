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

    if (stoi(s) <= 100)
    {
        cout << "NO\n";
        return;
    }
    if (s[0] != '1' || s[1] != '0')
    {
        cout << "NO\n";
        return;
    }
    if (s == "100" || s == "101")
    {
        cout << "NO\n";
        return;
    }
    int sz = s.size();
    bool b = true;
    rep(i,2,sz-1)
    {
        if (b && s[i] != '0')
        {
            b = false;
        }
        else if (b && s[i] == '0')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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