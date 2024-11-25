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
    cin >> n;

    map<int,vector<int>> nm;
    rep(i,0,n-1)
    {
        int temp;
        cin >> temp;
        nm[temp].pb(i);
    }

    cin >> m;
    rep(i,0,m-1)
    {
        string s;
        cin >> s;

        bool flag = true;
        bool alp[26] = {false};
        int sz = s.size();

        if (n != sz)
        {
            cout << "NO\n";
            continue;
        }
        for (auto j : nm)
        {
            int ssz = j.second.size();
            int idx = (s[j.second[0]]-'a');
            if (flag && alp[idx])
            {
                cout << "NO\n";
                flag = false;
                break;
            }
            alp[idx] = true;

            if (ssz > 1)
            {
                rep(k,1,ssz-1)
                {
                    if (flag && s[j.second[k]] != s[j.second[k-1]])
                    {
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag) cout << "YES\n";
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