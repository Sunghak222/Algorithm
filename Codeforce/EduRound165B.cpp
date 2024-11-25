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
    ll sz = s.size();
    bool isOne = false;
    ll cnt(1),ans(0);
    rep(i,0,sz-1)
    {
        if (!isOne && s[i] == '1')
        {
            isOne = true;
            continue;
        }
        if (isOne && s[i] == '1')
        {
            cnt++;
        }
        else if (isOne && s[i] == '0')
        {
            ans += cnt+1;
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