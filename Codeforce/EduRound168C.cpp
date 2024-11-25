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
    int n;
    string s;
    cin >> n >> s;

    ll ans(0);
    stack<int> st;  
    st.push(0);
    rep(i,1,n-1)
    {
        if (s[i] == '_')
        {
            if (!st.empty())
            {
                ans += (i - 1ll*st.top());
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
        else if (s[i] == ')')
        {
            ans += (i - 1ll*st.top());
            st.pop();
        }
        else
        {
            st.push(i);
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