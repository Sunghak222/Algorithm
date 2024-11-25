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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool bigger1,bigger2;
    bigger1 = (a>b) ? true : false;
    bigger2 = (c>d) ? true : false;
    if ((bigger1 && !bigger2) || (!bigger1 && bigger2))
    {
        cout << "NO\n";
        return;
    }
    else cout << "YES\n";
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