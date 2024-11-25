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

void solve()
{
    int n;
    int arr[200001];
    cin >> n;
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }

    map<pair<pair<int,int>,int>,int> gen; //tuple 개수
    map<pair<int,int>,int> mp1,mp2,mp3; // gen의 세 pair들의 개수
    ll ans(0);
    rep(i,0,n-3)
    {
        int val = gen[{{arr[i],arr[i+1]},arr[i+2]}];
        ans += mp1[{arr[i],arr[i+1]}] - val; // 중복 제거를 위해 -val
        ans += mp2[{arr[i],arr[i+2]}] - val;
        ans += mp3[{arr[i+1],arr[i+2]}] - val;

        gen[{{arr[i],arr[i+1]},arr[i+2]}]++; //뒤늦게 더해줌.
        mp1[{arr[i],arr[i+1]}]++;
        mp2[{arr[i],arr[i+2]}]++;
        mp3[{arr[i+1],arr[i+2]}]++;
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