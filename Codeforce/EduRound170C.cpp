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
    int card[200001];
    for (int i = 0; i < n; i++) cin >> card[i];

    sort(card,card+n);

    int ans(1);
    int l(0),r(0);
    
    while (l <= r && l < n && r < n)
    {
        if (r < n-1 && card[r+1] - card[l] + 1 <= k && card[r+1] - card[r] <= 1)
        {
            r++;
        }
        else if (l == r && r < n-1)
        {
            r++;
            l++;
        }
        else l++;

        ans = max(ans,r-l+1);
    }
    cout << ans << '\n';
}
//name = "abc"
// print("{:s} has {:d} kg".format(name,weight))
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