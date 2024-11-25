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
    int n,k;
    cin >> n >> k;
    int cnt(1);
    if (k == 0)
    {   
        cout << 0 << '\n';
        return;
    }
    if (k <= n)
    {
        cout << 1 << '\n';
        return;
    }
    int curr = n;
    per(i,n-1,1)
    {
        curr += i;
        cnt++;
        if (curr >= k)
        {
            cout << cnt << '\n';
            return;
        }
        curr += i;
        cnt++;
        if (curr >= k)
        {
            cout << cnt << '\n';
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