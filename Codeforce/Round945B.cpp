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

int arr[10001];

void add_bit(int x, int pos, map<int,vector<int>> &mp)
{
    int i = 0;
    while (x != 0)
    {
        if (x%2 == 1)
        {
            mp[i].pb(pos);
        }
        i++;
        x/=2;
    }
}

void solve(int t)
{
    int n;
    cin >> n;
    int arr[100001];
    map<int,vector<int>> mp;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        add_bit(arr[i],i,mp);
    }
    /* if (t == 100)
    {
        //cout << n;
        rep(i,0,n-1)
        {
            cout << arr[i] << ' ';
        }
    } */
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    int ans(0);
    for (auto i : mp)
    {
        for (int j = 0; j < i.second.size(); j++)
        {
            if (j == 0)
            {
                ans = max(ans,i.second[j]-0+1);
            }
            if (j == i.second.size()-1)
            {
                ans = max(ans,(n-1-i.second[j]+1));
            }
            if (j-1 >= 0) ans = max(ans,i.second[j]-i.second[j-1]);
        }
    }
    cout << ans << '\n';
    /* if (ans < 1) cout << 1 << '\n';
    else cout << ans << '\n'; */
}
/* 
14
4 0 0 0 1 0 0 0 1 0 4 0 0 1
 */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(i);
    }
}