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
/* 
3
aebdc
abce
cfghbaaa
cbfgh
cfghbaaa
cbaaafgh
 */
void solve()
{
    string a,b;
    cin >> a >> b;
    int ans = a.size()+b.size();
    bool used[105] = {false};
    int idx[105] = {0};
    rep(i,0,b.size()-1)
    {
        bool found = false;
        rep(j,0,a.size()-1)
        {
            if (b[i] == a[j] && !used[j])
            {
                used[j] = true;
                found = true;
                idx[i] = j;
                break;
            }
        }
        if (!found)
        {
            idx[i] = -1;
        }
    }

    int st(1),prev(0);
    rep(i,0,b.size()-1)
    {
        
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