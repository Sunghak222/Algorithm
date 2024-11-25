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

ll n,m;
ll arr[200001];

void solve()
{
    cin >> n >> m;
    map<ll,ll> mp;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);

    int l(0),r(1);
    ll curr(arr[0]),mx(0);
    mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
    bool flag = true;
    while (l < n && r < n)
    {
        if (curr <= m && r < n)
        {
            if (arr[r] == arr[r-1])
            {
                curr += arr[r++];
            }
            else if (arr[r] - arr[r-1] == 1)
            {
                if (flag)
                {
                    flag = false;
                    curr += arr[r++];
                }
                else
                {
                    curr -= arr[l++];
                    while (arr[l] == arr[l-1])
                    {
                        curr -= arr[l++];
                        mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
                    }
                    flag = true;
                }
            }
            else if (arr[r] - arr[r-1] != 1 && curr == 0)
            {
                curr += arr[r++];
                flag = true;
            }
            else
            {
                curr -= arr[l++];
            }
        }
        else if (curr > m)
        {
            curr -= arr[l++];
        }
        mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
    }
    cout << mx << '\n';
    /* int l(0);
    ll curr(0),mx(0);
    bool is_first = true;
    curr += arr[0];
    mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
    rep(i,1,n-1)
    {
        if (arr[i] == arr[i-1])
        {
            curr += arr[i];
        }
        else
        {
            if (arr[i] - arr[i-1] == 1)
            {
                if (is_first)
                {
                    is_first = false;
                    curr += arr[i];
                }
                else
                {
                    ll cnt = mp[arr[l]];
                    rep(j,0,cnt-1)
                    {
                        curr -= arr[l++];
                        mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
                    }
                    curr += arr[i];
                }
            }
            else
            {
                ll cnt;
                if (is_first)
                {
                    cnt = mp[arr[l]];
                }
                else cnt = mp[arr[l]]+mp[arr[i-1]];
                rep(j,0,cnt-1)
                {
                    curr -= arr[l++];
                    mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
                }
                is_first = true;
                curr = arr[i];
            }
        }
        mx = (max(mx,curr) <= m) ? max(mx,curr) : mx;
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