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
    int n,x,y;
    cin >> n >> x >> y;
    int arr[200003];
    rep(i,0,n-1)
    {
        if (i < x) arr[i] = 1;
        else
        {
            arr[i] = arr[i-1] * -1;
        }
    }
    
    per(i,y-2,0)
    {
        arr[i] = arr[i+1]*-1;
    }

    rep(i,0,n-1)
    {
        cout << arr[i] << ' ';
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