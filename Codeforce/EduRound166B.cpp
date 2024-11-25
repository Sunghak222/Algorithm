#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
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
    ll n,cnt(0);
    cin >> n;
    ll a[200005];
    ll b[200005];
    rep(i,0,n-1)
    {
        cin >> a[i];
    }
    rep(i,0,n)
    {
        cin >> b[i];
    }
    ll last = b[n];
    ll d = 2000000000;
    rep(i,0,n-1)
    {
        if (a[i] == last) d = 0;
        cnt += abs(a[i]-b[i]);
    }
    rep(i,0,n-1)
    {
        if (last <= a[i] && last >= b[i])
        {
            d = 0;
        }
        else if (last >= a[i] && last <= b[i])
        {
            d = 0;
        }
        d = min(d,min(abs(a[i]-last),abs(b[i]-last)));
    }
    cout << cnt + d + 1 << '\n';
        /* 
1
4
4 3 2 2
3 2 5 2 1
        if (a[i] > b[i] && a[i] > last && b[i] < last)
        {
            cout << cnt+1 << '\n';
            return;
        }
        else if (a[i] < b[i] && a[i] < last && b[i] > last)
        {
            cout << cnt+1 << '\n';
            return;
        }
        else if (a[i] > b[i] && a[i] > last && b[i] > last)
        {
            d = min(d,b[i]-last);
        }
        else if (a[i] < b[i] && a[i] < last && b[i] < last)
        {
            d = min(d,last-b[i]);
        }
        else
        {
            if (a[i] > last)
            {
                d = min(d,a[i]-last);
            }
            else
            {
                d = min(d,last-a[i]);
            }
        } */
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