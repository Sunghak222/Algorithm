#include <iostream>
#include <string>
#include <vector>
#include <set>
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
    cin >> n;
    int a[101];
    int b[101];
    int temp;
    rep(i,0,n-1)
    {
        cin >> a[i];
    }
    rep(i,0,n-1)
    {
        cin >> b[i];
    }
    int cnt(0),idx(0);
    rep(i,0,n-1)
    {
        if (idx >= n) break;
        if (a[i] > b[idx])
        {
            bool isend = false;
            while (idx < n)
            {
                if (a[i] <= b[idx])
                {
                    cnt+= idx-i-cnt;
                    isend = true;
                    idx++;
                    break;
                }
                idx++;
            }
            if (!isend)
            {
                cnt += n-1-i-cnt+1;
                break;
            }
        }
        else idx++;
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