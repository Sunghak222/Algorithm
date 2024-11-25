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

int getGCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return (a>=b) ? a : b;
    }
    bool isBigger = (a>=b) ? 1 : 0;
    if (isBigger)
    {
        return getGCD(b,a%b);
    }
    else
    {
        return getGCD(a,b%a);
    }
}

void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    int gcd = getGCD(a,b);
    set<int> s;
    rep(i,0,n-1)
    {
        int temp;
        cin >> temp;
        s.insert(temp%gcd);
    }

    vector<int> v;
    for(auto i : s)
    {
        v.pb(i);
    }

    int sz = v.size();
    int ans = v[sz-1] - v[0];

    int mx = v[sz-1];
    int mn = v[0];
    rep(i,0,sz-2)
    {
        mx = v[i]+gcd;
        mn = v[i+1];
        ans = min(ans,mx-mn);
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