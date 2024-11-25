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
    int n;
    string s;
    cin >> n >> s;
    
    int ans = 10000000;
    if (n % 2 == 0)
    {
        int alp[2][26] = {0}; //even,odd
        rep(i,0,n-1)
        {
            int num = s[i]-'a';
            alp[i%2][num]++;
        }
        int temp = 0;
        rep(i,0,1)
        {
            int mx = 0;
            rep(j,0,25)
            {
                if (mx < alp[i][j]) mx = alp[i][j];
            }
            temp += mx;
        }
        ans = min(ans,n-temp);
    }
    else
    {
        int pref[2][26] = {0};
        int suf[2][26] = {0};
        for (int i = n-1; i >= 0; i--)
        {
            suf[i%2][s[i]-'a']++;
        }
        rep(i,0,n-1) //각 자리마다 빼는 경우 브루트포스
        {
            suf[i%2][s[i]-'a']--;
            int temp = 0;
            rep(j,0,1)
            {
                int mx = 0;
                rep(k,0,25)
                {
                    mx = max(mx,suf[1-j][k]+pref[j][k]);
                }
                temp += mx;
            }
            ans = min(ans,n-temp);
            pref[i%2][s[i]-'a']++;
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