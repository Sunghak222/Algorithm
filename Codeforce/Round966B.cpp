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
    cin >> n;
    bool arr[200002];
    bool flag = true;
    rep(i,0,200001)
    {
        arr[i] = false;
    }
    int tp;
    cin >> tp;
    arr[tp] = true;
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    rep(i,0,n-2)
    {
        cin >> tp;
        bool ok = true;
        if (!arr[tp-1] && !arr[tp+1])
        {
            ok = false;
        }
        if (ok)
        {
            arr[tp] = true;
        }
        else
        {
            flag = false;
        }
    }
    if (flag) cout << "YES\n";
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