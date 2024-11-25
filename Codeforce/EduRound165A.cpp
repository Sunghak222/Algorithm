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

void solve()
{
    int n;
    cin >> n;
    int arr[52];
    rep(i,1,n)
    {
        cin >> arr[i];
    }
    rep(i,1,n)
    {
        int a = arr[i];
        if (arr[a] == i)
        {
            cout << "2\n";
            return;
        }
    }
    cout << "3\n";
    return;
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