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
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int ans = n+m;
    int ov = 0;
    for (int i = 0; i < min(n,m); i++)
    {
        if (s[i] == t[i]) ov++;
        else break;
    }
    if (ov == 0) cout << ans << '\n';
    else cout << ans - ov + 1 << '\n';
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