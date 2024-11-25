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

ll n,ans,sum;
ll monster[300004];
bool visited[300004];
vector<int> tree[300004];

void kill(ll dam)
{
    rep(i,0,n-1)
    {
        
    }
}
void solve()
{
    
    cin >> n;
    rep(i,0,n-1)
    {
        cin >> monster[i];
        sum += monster[i];
    }
    ans += sum;
    sum = 0;
    rep(i,0,n-2)
    {
        int a,b;
        cin >> a >> b;
        tree[a].pb(b);
        tree[b].pb(a);
    }
    

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