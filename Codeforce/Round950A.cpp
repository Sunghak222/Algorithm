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
    int n,m;
    string s;
    cin >> n >> m >> s;
    map<char,int> mp;
    rep(i,0,n-1)
    {
        mp[s[i]]++;
    }
    int cnt(0);
    char c = 'A';
    rep(i,0,6)
    {
        cnt += (m-mp[c] >= 0) ? m-mp[c] : 0;
        c++;
    }
    cout << cnt << '\n';
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