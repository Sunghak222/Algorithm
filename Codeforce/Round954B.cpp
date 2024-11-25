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

int n,m;
int arr[101][101];

void solve()
{
    cin >> n >> m;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> arr[i][j];
        }
    }

    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            bool flag = true;
            int mx(0);

            if (i-1 >= 0 && arr[i][j] <= arr[i-1][j])
            {
                flag = false;
                mx = max(mx,arr[i-1][j]);
            }
            if (i+1 < n && arr[i][j] <= arr[i+1][j])
            {
                flag = false;
                mx = max(mx,arr[i+1][j]);
            }
            if (j-1 >= 0 && arr[i][j] <= arr[i][j-1])
            {
                flag = false;
                mx = max(mx,arr[i][j-1]);
            }
            if (j+1 < m && arr[i][j] <= arr[i][j+1])
            {
                flag = false;
                mx = max(mx,arr[i][j+1]);
            }
            if (flag)
            {
                if (i-1 >= 0) mx = max(mx,arr[i-1][j]);
                if (i+1 < n) mx = max(mx,arr[i+1][j]);
                if (j-1 >= 0) mx = max(mx,arr[i][j-1]);
                if (j+1 < m) mx = max(mx,arr[i][j+1]);
                arr[i][j] = mx;
            }
        }
    }
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
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