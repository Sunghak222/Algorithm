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
    int n,f,k;
    cin >> n >> f >> k;
    int arr[101];
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    int target = arr[f-1];
    sort(arr,arr+n,greater<int>());

    if (n == k)
    {
        cout << "YES\n";
        return;
    }
    if (arr[k-1] == target && arr[k] == target)
    {
        cout << "MAYBE\n";
        return;
    }
    if (arr[k-1] > target)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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