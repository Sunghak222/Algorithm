#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int k,q;
    cin >> k >> q;
    int arr[101];
    int mn = 10000;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    int n;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        if (mn > n)
        {
            cout << n << ' ';
        }
        else
        {
            cout << mn-1 << ' ';
        }
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