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
    ll n,k;
    cin >> n >> k;
    ll arr[200001],tmp[200001];
    bool bin[200001];

    ll ans(0),mx(0);
    rep(i,0,n-1)
    {
        cin >> arr[i];
        tmp[i] = arr[i];
    }
    rep(i,0,n-1)
    {
        cin >> bin[i];
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