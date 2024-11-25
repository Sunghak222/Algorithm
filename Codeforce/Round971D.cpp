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

int n;
vector<pair<int,int>> v;

void solve()
{
    cin >> n;
    map<pair<int,int>,bool> mp;
    rep(i,0,n-1)
    {
        int a,b;
        cin >> a >> b;
        v.pb({a,b});
        mp[{a,b}] = true;
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    rep(i,0,n-1)
    {
        pair<int,int> curr = v[i];
        if (curr.second == 0)
        {
            if (mp[{curr.first,1}])
            {
                ans += n-2;
            }
            if (mp[{curr.first+1,1}] && mp[{curr.first+2,0}])
            {
                ans += 1;
            }
        }
        else if (curr.second == 1)
        {
            if (mp[{curr.first+1,0}] && mp[{curr.first+2,1}])
            {
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    v.clear();
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