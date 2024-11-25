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
    int arr[50];
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    if (n > 2)
    {
        cout << "NO\n";
        return;
    }
    int diff = abs(arr[0]-arr[1]);
    if (diff == 1)
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