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

int n,num,idx;
int arr[200002];
string s;
bool visited[200002];
int ans[200002];

void dfs(int node)
{
    visited[node] = true;
    ans[node] = idx;
    int curr = arr[node];
    if (s[node-1] == '0') num++;
    if (!visited[curr]) dfs(curr);
}

void solve()
{
    cin >> n;
    rep(i,1,n)
    {
        cin >> arr[i];
    }    
    cin >> s;

    vector<int> v;
    rep(i,1,n)
    {
        if (!visited[i])
        {
            dfs(i);
            v.pb(num);
            num = 0;
            idx++;
        }
    }
    rep(i,1,n)
    {
        cout << v[ans[i]] << ' ';
        visited[i] = false;
        ans[i] = 0;
        idx = 0;
        num = 0;
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