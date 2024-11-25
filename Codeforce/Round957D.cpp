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
    int n,jump,swim;
    string s;
    cin >> n >> jump >> swim >> s;
    jump--;

    int curr_swim(0),curr_jump(0);
    int water(0);
    rep(i,0,n-1)
    {
        if (s[i] == 'L')
        {
            curr_jump = 0;
            continue;
        }
        else if (s[i] == 'W')
        {
            if (curr_jump < jump)
            {
                curr_jump++;
            }
            else
            {
                if (curr_swim < swim)
                {
                    curr_swim++;
                }
                else
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        else if (s[i] == 'C')
        {
            if (curr_jump < jump)
            {
                curr_jump++;
            }
            else
            {
                cout << "NO\n";
                return;
            }
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