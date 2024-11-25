#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
#include <cmath>
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
    ll ans(0);
    int arr[300001];
    multiset<vector<int>> ms;
    multiset<int,greater<int>> mm;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    if (n == 1)
    {
        cout << arr[0] << '\n';
        return;
    }
    vector<int> tp;
    tp.pb(arr[0]-arr[1]);
    tp.pb(0);
    ms.insert(tp);
    mm.insert(arr[0]-arr[1]);
    tp.clear();
    tp.pb(arr[n-1]-arr[n-2]);
    mm.insert(arr[n-1]-arr[n-2]);
    tp.pb(n-1);
    ms.insert(tp);
    tp.clear();
    rep(i,1,n-2)
    {
        int temp = max(arr[i]-arr[i-1],arr[i]-arr[i+1]);
        tp.pb(temp);
        tp.pb(i);
        ms.insert(tp);
        mm.insert(temp);
        tp.clear();
    }
    int sz = ms.size();
    multiset<vector<int>>::reverse_iterator it = ms.rbegin();

    int a = *(it->begin());
    int b = *(it->begin()+1);
    ans -= a;
    int mx;
    int idx;
    if (b > 0)
    {
        if (arr[b]-a < arr[b-1])
        {
            mx = (arr[b]-a)-arr[b-1];
            idx = b-1;
        }
    }
    if (b < n)
    {
        if (arr[b]-a < arr[b+1])
        {
            mx = max(mx,(arr[b]-a)-arr[b+1]);
            if (mx < (arr[b]-a)-arr[b+1])
            {
                mx = (arr[b]-a)-arr[b+1];
                idx = b+1;
            }
        }
    }
    vector<int> v;
    v.pb(mx);
    v.pb(idx);
    ms.insert(v);
    v.clear();
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