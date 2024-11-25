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
    ll n,k;
    cin >> n >> k;
    ll mx(0);
    for (int i = 0; i < n; i++) 
    {
        mx += abs(n - 1 - i - i);
    }
    /* if (n%2 == 1)
    {
        mx = n/2;
        mx = mx*mx+mx;
    }
    else
    {
        mx = n/2;
        mx = mx*mx;
    }
    mx *= 2; */
    if (k > mx || k % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    
    ll idx[200001];
    rep(i,1,n)
    {
        idx[i] = i;
    }
    rep(i,1,n/2)
    {
        if (k <= (n-i+1-i)*2)
        {
            swap(idx[i],idx[i+k/2]);
            /* idx[i] = i+k/2;
            idx[i+k/2] = i; */
            break;
        }
        k -= (n-i+1-i)*2;
        swap(idx[i],idx[n-i+1]);
        /* idx[i] = n-i+1;
        idx[n-i+1] = i; */
    }
    cout << "YES\n";
    rep(i,1,n)
    {
        cout << idx[i] << ' ';
    }
    cout << '\n';
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