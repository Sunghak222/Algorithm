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

ll n;
ll ans(0);
ll arr[200001];

ll op(ll mad, ll num)
{
    return (num*(num+1)/2)*mad;
}
void get_mad()
{
    map<ll,ll> mp;
    ll mad(0);
    rep(i,0,n-1)
    {
        ll curr = arr[i];
        ans += curr;
        mp[curr]++;
        if (mp[curr] >= 2)
        {
            mad = max(mad,curr);
        }
        arr[i] = mad;
    }
}
void solve()
{
    cin >> n;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        //ans += arr[i];
    }

    get_mad();
    get_mad();

    ll sum(0);
    map<ll,ll> mp;
    rep(i,0,n-1)
    {
        mp[arr[i]]++;
        sum += arr[i];
    }
    ans += sum;
    per(i,n-1,0)
    {
        sum -= arr[i];
        ans += sum;
    }
    cout << ans << '\n';
    ans = 0;
    /* 
    ll mad(0),num(0),prev(0);
    
    map<ll,int> mp; //num,count
    map<ll,int> mp2;
    rep(i,0,n-1)
    {
        ll curr = arr[i];
        mp[curr]++;
        if (mp[curr] >= 2)
        {
            if (mad < curr)
            {
                if (mad != 0)
                {
                    //ans += op(mad,num);
                } 
                mp2[mad] = num;
                if (num == 1) 
                {
                    ans += mad;
                    ans -= prev;
                }
                arr[i-1] = prev;
                prev = mad;
                mad = curr;
                num = 0;
            }
        }
        if (mad != 0)
        {
            num++;
        }
        arr[i] = mad;
    }
    rep(i,0,n-2)
    {
        if (arr[i] != arr[i+1])
        {
            ans += op(arr[i],mp2[arr[i]]);
        }
    }
    ans += ans += op(arr[n-1],mp2[arr[n-1]]);

    if (mad != 0)
    {
        ans += op(mad,num);
    } 
    cout << ans << '\n';*/
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