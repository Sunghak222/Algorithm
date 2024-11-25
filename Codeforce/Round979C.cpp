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
    if (s[0]=='1' || s[n-1]=='1') 
    {
        cout << "YES\n";
        return;
    }

    int cnt(0);
    for (int i = 0; i < n; i++) 
    {
        if (cnt > 1) 
        {
            cout << "YES\n";
            return;
        }
        if (s[i] == '1')
        {
            cnt++;
        }
        else cnt = 0;
    }
    cout << "NO\n";
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