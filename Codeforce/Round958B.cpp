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
    string temp = "";

    bool is_zero = false;
    rep(i,0,n-1)
    {
        if (s[i] == '1')
        {
            temp += '1';
            is_zero = false;
        }
        else
        {
            if (is_zero)
            {
                continue;
            }
            else
            {
                temp += '0';
                is_zero = true;
            }
        }
    }
    int one(0),zero(0);
    for (auto i : temp)
    {
        if (i == '1') one++;
        else zero++;
    }
    if (one > zero)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";
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