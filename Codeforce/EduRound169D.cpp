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

int binarysearch(vector<int> &v, int x)
{
    int lo(0),hi(v.size());
    while (lo+1 < hi)
    {
        int mid = (lo+hi)/2;
        if (v[mid] >= x)
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    return lo;
}
void solve()
{
    int n,q;
    cin >> n >> q;
    vector<string> input(n); for(auto &x : input) cin >> x;
    map<string,vector<int>> mp; for (int i = 0; i < n; i++) mp[input[i]].pb(i);
    

    rep(i,0,q-1)
    {
        int ans(1e9);
        int from,to;
        cin >> from >> to;
        from--; //start from zero
        to--;

        if (from > to)
        {
            int temp = to;
            to = from;
            from = temp;
        }

        string s1 = input[from];
        string s2 = input[to];
        bool found = false;
        rep(i,0,1)
        {
            rep(j,0,1)
            {
                if (s1[i] == s2[j])
                {
                    ans = to-from;
                    found = true;
                }
            }
        }
        if (found) 
        {
            cout << ans << '\n';
            continue;
        }

        for (auto &[k,v] : mp)
        {
            if (k == input[from] || k == input[to]) continue;
            int pos = binarysearch(v,from);
            if (pos != v.size())
            {
                ans = min(ans,v[pos]-from);
            }
            if (pos != 0 && pos - 1 >= 0)
            {
                ans = min(ans,to-v[pos-1]);
            }
        }
        if (ans > to-from && ans != 1e9)
        {
            ans = 2*(ans-(to-from))+to-from;
        }
        ans = max(ans,to-from);
        if (ans == 1e9) ans = -1;
        cout << ans << '\n';
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