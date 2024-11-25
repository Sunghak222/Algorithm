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

ll MOD = 1e9+7;

void solve()
{
    ll t;
    
    cin >> t;
    ll n[100002],k[100002],memo[100002];
    for (int i = 0; i < t; i++) cin >> n[i];
    for (int i = 0; i < t; i++) cin >> k[i];

    memo[0] = 1;
    for (int i = 1; i <= 100000; i++) 
    {
        memo[i] = ((memo[i-1]%MOD)*2)%MOD;
    }
    for (int i = 0; i < t; i++) 
    {
        if (k[i] == n[i]) cout << 1 << '\n';
        else cout << memo[k[i]] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}