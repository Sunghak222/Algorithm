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
    ll arr[200001];
    cin >> arr[0];
    rep(i,1,n-1)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    
    ll mx(arr[0]);
    int cnt(0);
    if (arr[0] == 0)
    {
        cnt++;
    }
    rep(i,1,n-1)
    {
        mx = max(mx,arr[i]-arr[i-1]);
        if (mx == arr[i]-mx)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
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