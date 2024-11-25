#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int n;
int c[5] = {15,6,3,1};

void solve()
{
    int temp(0),curr(n),ans(1000000000);
    rep(i,0,2)
    {
        temp = 0;
        curr = n;
        if (10*i <= curr)
        {
            curr -= 10*i;
            temp += i;
        }
        rep(j,0,3)
        {
            if (curr >= c[j])
            {
                temp += curr/c[j];
                curr %= c[j];
            }
        }
        ans = min(temp,ans);
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
        cin >> n;
        solve();
    }
}