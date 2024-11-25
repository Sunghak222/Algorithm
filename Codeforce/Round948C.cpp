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

ll getGCD(ll a, ll b)
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
    vector<int> v;
    map<int,bool> mp;
    int n,mx(0);
    ll lcm(1);
    cin >> n;
    rep (i,0,n-1)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
        mp[v[i]] = true;
        if (temp > mx) mx = temp;
    }
    rep (i,0,n-1)
    {
        lcm = lcm/getGCD(v[i],lcm)*v[i];
        if (lcm > mx)
        {
            cout << n << '\n';
            return;
        }
    }
    int ans(0);
    auto f = [&](int num) -> int // mx의 약수인 num을 v의 원소들로 나누어 떨어진다면 ++.
    {
        ll temp(0),LCM(0);
        rep(j,0,n-1)
        {
            if (num%v[j]==0) 
            {
                temp++;
                if (LCM == 0) LCM = v[j];
                else LCM = LCM/getGCD(LCM,v[j])*v[j];
            }
        }
        if (LCM != num) temp = 0;
        return temp;
    };

    for (int i = 1; i * i <= mx; i++)
    {
        if (mx%i == 0) //mx의 약수일 경우.
        {
            if (!mp[i]) ans = max(ans,f(i));
            if (!mp[mx/i]) ans = max(ans,f(mx/i));
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