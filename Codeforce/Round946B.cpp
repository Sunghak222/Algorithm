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
    string b;
    cin >> n >> b;
    int alp[26][2] = {0};
    rep(i,0,n-1)
    {
        int tp = (b[i]-'a');
        alp[tp][0] = 1;
    }
    vector<char> v;
    rep(i,0,25)
    {
        if (alp[i][0] == 1)
        {
            v.pb('a'+i);
        }
    }
    int idx = v.size()-1;
    rep(i,0,25)
    {
        if (alp[i][0] == 1)
        {
            alp[i][1] = v[idx];
            idx--;
        }
    }
    rep(i,0,n-1)
    {
        cout << char(alp[b[i]-'a'][1]);
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