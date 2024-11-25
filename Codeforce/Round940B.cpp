#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << k << '\n';
        return;
    }
    if (k == 1)
    {
        for (int i = 0; i < n-1; i++)
        {
            cout << 0 << ' ';
        }
        cout << 1 << '\n';
        return;
    }
    int num = 1;
    while (num < k)
    {
        num *= 2;
    }
    num = num/2-1;
    for (int i = 0; i < n-2; i++)
    {
        cout << 0 << ' ';
    }
    int rem = k - num;
    cout << num << ' ' << rem << '\n';
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