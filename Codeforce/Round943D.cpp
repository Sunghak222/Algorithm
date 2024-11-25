#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

ll n,k,bi,si;
ll p[200002];
ll a[200002];
ll mx1,mx2;

void solve()
{
    cin >> n >> k >> bi >> si;
    int idxb = bi;
    int idxs = si;
    rep(i,1,n)
    {
        cin >> p[i];
    }
    rep(i,1,n)
    {
        cin >> a[i];
    }
    ll maxb(a[bi]),maxs(a[si]),cntb(0),cnts(0);
    idxb = p[bi];
    idxs = p[si];
    cntb++;
    cnts++;
    while (idxb != bi)
    {
        maxb = (maxb >= a[idxb]) ? maxb : a[idxb];
        cntb++;
        idxb = p[idxb];
    }
    while (idxs != si)
    {
        maxs = (maxs >= a[idxs]) ? maxs : a[idxs];
        cnts++;
        idxs = p[idxs];
    }
    ll plus(0);
    rep(i,0,cntb-1)
    {
        if (i == k) break;
        ll temp = plus+(k-i)*a[idxb];
        plus += a[idxb];
        idxb = p[idxb];
        mx1 = (mx1 >= temp) ? mx1 : temp;
    }
    plus = 0;
    rep(i,0,cnts-1)
    {
        if (i == k) break;
        ll temp = plus+(k-i)*a[idxs];
        plus += a[idxs];
        idxs = p[idxs];
        mx2 = (mx2 >= temp) ? mx2 : temp;
    }
    if (mx1 > mx2)
    {
        cout << "Bodya\n";
    }
    else if (mx1 < mx2)
    {
        cout << "Sasha\n";
    }
    else
    {
        cout << "Draw\n";
    }
    mx1 = 0;
    mx2 = 0;
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