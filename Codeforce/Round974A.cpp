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
    int arr[101];
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }

    int ans(0),curr(0);

    rep(i,0,n-1)
    {
        if (arr[i] >= k) curr += arr[i];
        if (arr[i] == 0 && curr > 0) 
        {
            ans++;
            curr--;
        }
    }
    cout << ans << '\n';
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