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
    int a,b;
    cin >> a >> b;
    if (a%2 == 1)
    {
        cout << "NO\n";
        return;
    }

    // a 짝수
    if (b == 0)
    {
        cout << "YES\n";
        return;
    }
    //a 짝수 b 0아님
    if (b%2 == 0)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        if (a == 0)
        {
            cout << "NO\n";
            return;
        }
        else
        {
            cout << "YES\n";
            return;
        }
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