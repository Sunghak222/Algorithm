#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; j >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[101] = {0};
    rep(i,0,n-1)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    rep(i,0,100)
    {
        if (arr[i] >= k)
        {
            cout << k-1 << '\n';
            return;
        }
    }
    cout << n << '\n';
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