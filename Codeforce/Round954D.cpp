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

    int ans(2000000000);
    int idx(0),mn(1000);
    if (n == 2)
    {
        cout << (s[0]-'0')*10 + (s[1]-'0') << '\n';
        return;
    }

    rep(i,0,n-2)
    {
        stack<int> st;
        int curr(0);
        int num(0);

        rep(j,0,n-1)
        {
            if (curr == 0)
            {
                if (j == i)
                {
                    curr = (s[j]-'0')*10 + (s[j+1]-'0');
                    j++;
                }
                else
                {
                    curr = s[j]-'0';
                }
                if (curr == 0)
                {
                    cout << 0 << '\n';
                    return;
                }
                continue;
            }
            if (j == i)
            {
                num = (s[j]-'0')*10 + (s[j+1]-'0');
                j++;
                if (num == 0)
                {
                    cout << 0 << '\n';
                    return;
                }
            }
            else
            {
                num = s[j]-'0';
                if (num == 0)
                {
                    cout << 0 << '\n';
                    return;
                }
            }
            
            if (curr == 1 || num == 1)
            {
                curr = curr*num;
                num = 0;
            }
            else
            {
                st.push(curr);
                curr = num;
                num = 0;
            }
        }
        st.push(curr);
        int temp(0);
        while (!st.empty())
        {
            temp += st.top();
            st.pop();
        }
        ans = min(ans,temp);
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