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
/* 
    {tuple,vector} 로 벡터 정렬 후 조합 더해주기 = 시간초과
    {tuple,map{int,int}}
 */
void solve()
{
    int n;
    cin >> n;
    map<pair<pair<int,int>,int>,map<int,int>> mp;
    int arr[200001] = {0};
    ll ans(0);
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    rep(i,2,n-1)
    {
        int a,b,c;
        a = arr[i-2];
        b = arr[i-1];
        c = arr[i];
        mp[{{a,b},0}][c]++;
        mp[{{a,0},c}][b]++;
        mp[{{0,b},c}][a]++;
    }
    for (auto i : mp)
    {
        int sz = i.second.size();
        ll temp = 0;
        bool is_not_start = false;
        for (auto j : i.second)
        {
            if (!is_not_start)
            {
                temp += j.second;
                is_not_start = true;
                continue;
            }
            ans += temp * j.second;
            temp += j.second;
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
/* 
1
9
1 1 3 1 1 2 1 1 1 */