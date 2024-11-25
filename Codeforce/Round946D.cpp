#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
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

void solve(int t)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tp[4] = {0};
    int ans[4] = {0};
    rep(i,0,n-1)
    {
        if (s[i] == 'N')
        {
            tp[0]++;
        }
        else if (s[i] == 'S')
        {
            tp[1]++;
        }
        else if (s[i] == 'E')
        {
            tp[2]++;
        }
        else if (s[i] == 'W')
        {
            tp[3]++;
        }
    }
    if (tp[0] == 1 && tp[1] == 1 && tp[2] == 0 && tp[3] == 0)
    {
        cout << "NO\n";
        return;
    }
    if (tp[0] == 0 && tp[1] == 0 && tp[2] == 1 && tp[3] == 1)
    {
        cout << "NO\n";
        return;
    }
    if (tp[0] == 1 && tp[1] == 1 && tp[2] == 1 && tp[3] == 1)
    {
        ans[0] = 1;
        ans[1] = 1;
        rep(i,0,n-1)
        {
            if (s[i] == 'N')
            {
                if (ans[0] > 0)
                {
                    cout << 'R';
                    ans[0]--;
                }
                else
                {
                    cout << 'H';
                }
            }
            else if (s[i] == 'S')
            {
                if (ans[1] > 0)
                {
                    cout << 'R';
                    ans[1]--;
                }
                else
                {
                    cout << 'H';
                }
            }
            else if (s[i] == 'E')
            {
                if (ans[2] > 0)
                {
                    cout << 'R';
                    ans[2]--;
                }
                else
                {
                    cout << 'H';
                }
            }
            else if (s[i] == 'W')
            {
                if (ans[3] > 0)
                {
                    cout << 'R';
                    ans[3]--;
                }
                else
                {
                    cout << 'H';
                }
            }
        }
        cout << '\n';
        return;
    }
    if ((tp[0]+tp[1])%2 == 0)
    {
        if (tp[0] == tp[1])
        {
            ans[0] += max(tp[0]-1,0);
            ans[1] += max(tp[1]-1,0);
        }
        else
        {
            if (tp[0] > tp[1])
            {
                ans[0] += (tp[0]-tp[1])/2+tp[1];
                ans[1] += tp[1];
                
            }
            else
            {
                ans[0] += tp[0];
                ans[1] += (tp[1]-tp[0])/2+tp[0];
            }
        }
    }
    else
    {
        cout << "NO\n";
        return;
    }

    if ((tp[2]+tp[3])%2 == 0)
    {
        if (tp[2] == tp[3])
        {
            ans[2] += max(tp[2]-1,0);
            ans[3] += max(tp[3]-1,0);
        }
        else
        {
            if (tp[2] > tp[3])
            {
                ans[2] += (tp[2]-tp[3])/2+tp[3];
                ans[3] += tp[3];
                
            }
            else
            {
                ans[2] += tp[2];
                ans[3] += (tp[3]-tp[2])/2+tp[2];
            }
        }
    }
    else
    {
        cout << "NO\n";
        return;
    }
    rep(i,0,n-1)
    {
        if (s[i] == 'N')
        {
            if (ans[0] > 0)
            {
                cout << 'R';
                ans[0]--;
            }
            else
            {
                cout << 'H';
            }
        }
        else if (s[i] == 'S')
        {
            if (ans[1] > 0)
            {
                cout << 'R';
                ans[1]--;
            }
            else
            {
                cout << 'H';
            }
        }
        else if (s[i] == 'E')
        {
            if (ans[2] > 0)
            {
                cout << 'R';
                ans[2]--;
            }
            else
            {
                cout << 'H';
            }
        }
        else if (s[i] == 'W')
        {
            if (ans[3] > 0)
            {
                cout << 'R';
                ans[3]--;
            }
            else
            {
                cout << 'H';
            }
        }
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(t);
    }
}