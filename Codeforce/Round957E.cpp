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
#include <cstdlib>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int n;
int len_n;
string str_n;

bool check(int a, int b)
{
    int temp = n*a-b;
    string ans1 = to_string(temp);

    int num = len_n*a-b;
    string ans2 = "";

    rep(i,0,num/len_n-1)
    {
        ans2 += str_n;
    }
    rep(i,0,(num%len_n)-1)
    {
        ans2 += str_n[i];
    }
    return (ans1 == ans2);
}

void solve()
{
    cin >> n;

    int cnt(0);
    str_n = to_string(n);
    len_n = str_n.size();
    vector<pair<int,int>> v;

    rep(a,1,10000)
    {
        rep(b,max(len_n*a-7,1),len_n*a)
        {
            //cout << a << ' ' << b;
            if (check(a,b))
            {
                cnt++;
                v.pb({a,b});
            }
        }
    }

    cout << cnt << '\n';
    int sz = v.size();
    rep(i,0,v.size()-1)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
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