#include <iostream>
#include <cmath>
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

void solve()
{
    int n;
    cin >> n;
    int arr[101];
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << abs(arr[n-1]-arr[0])+abs(arr[0]-arr[n-2])+abs(arr[n-2]-arr[1])+abs(arr[1]-arr[n-1]) << '\n';
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