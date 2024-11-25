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
    int side = 0;
    bool is_square = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (i*i == n)
        {
            is_square = true;
            side = i;
        }
    }
    if (is_square == false)
    {
        cout << "NO\n";
        return;
    }
    string temp = "";
    rep(i,0,side-1)
    {
        rep(j,0,side-1)
        {
            if (i == 0 || j == 0 || i == side-1 || j == side-1)
            {
                temp += '1';
            }
            else temp += '0';
        }
    }
    if (s == temp)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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