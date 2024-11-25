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

void solve(int i)
{
    int n;
    string s;
    cin >> n >> s;
    int alp[26] = {0};
    rep(i,0,n-1)
    {
        alp[s[i]-'a']++;
    }
    while (true)
    {
        bool flag = false;
        rep(i,0,25)
        {
            if (alp[i]>0)
            {
                cout << (char)('a'+i);
                alp[i]--;
                flag = true;
            }
        }
        if (!flag) break;
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
        solve(i);
    }
}