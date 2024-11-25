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
    cin >> n;
    int arr[200001];
    int q[200001]; //0~n-1
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }

    cout << arr[n-1] << ' ';
    rep(i,0,n-2)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';


    //cout << check(n,arr,q);
    /* rep(i,0,n-1)
    {
        cout << q[i] << ' ';
    }
    cout << '\n'; */
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