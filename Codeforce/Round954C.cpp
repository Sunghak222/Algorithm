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
    string s,c;
    cin >> n >> m >> s;
    int index[100001];
    rep(i,0,m-1)
    {
        cin >> index[i];
    }
    cin >> c;

    sort(index,index+m);
    sort(c.begin(),c.end());
    
    int l(0),r(m-1);
    rep(i,1,m-1)
    {
        if (index[i] == index[i-1])
        {
            s[index[i-1]-1] = c[r--];
        }
        else
        {
            s[index[i-1]-1] = c[l++];
        }
    }
    s[index[m-1]-1] = c[l];
    cout << s << '\n';
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