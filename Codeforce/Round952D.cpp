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
    int n,m;
    cin >> n >> m;

    int ans[2];
    bool is_second = false;
    rep(i,0,n-1)
    {
        string s;
        cin >> s;

        int sharp(0),pos;
        rep(j,0,m-1)
        {
            if (s[j] == '#')
            {
                sharp++;
                pos = j;
            }
        }
        if (sharp == 1 && !is_second)
        {
            ans[0] = i+1;
            ans[1] = pos+1;
            is_second = true;
        }
        else if (sharp == 1 && is_second)
        {
            ans[0] = (ans[0]+i+1)/2;
        }
    }
    cout << ans[0] << ' ' << ans[1] << '\n';
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