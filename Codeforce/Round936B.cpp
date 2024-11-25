#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
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
    ll arr[200001],total(0);
    rep(i,0,n-1)
    {
        cin >> arr[i];
        total+=arr[i];
    }
    ll curr(0),sum(0);
    rep(i,0,n-1)
    {
        curr += arr[i];
        sum = max(sum,curr);
        if (curr < 0)
        {
            curr = 0;
        }
    }
    rep(i,0,k-1)
    {
        total += sum%1000000007;
        total %= 1000000007;
        sum*=2;
        sum%=1000000007;
    }
    if (total < 0) cout << (total%1000000007)+1000000007 << '\n';
    else cout << total%1000000007 << '\n';
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