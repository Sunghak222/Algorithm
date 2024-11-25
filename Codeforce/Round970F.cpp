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
#define MOD 1e9+7

using namespace std;
using ll = long long;
using ull = unsigned long long;

ll n;
ll arr[200001];

void solve()
{
    cin >> n;
    map<ll,int> mp;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        mp[arr[i]]++;
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