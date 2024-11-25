#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,tot(0);
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++, j+=2)
    {
        tot += i*j;
    }
    cout << tot << ' ' << 2*n << '\n';
    for (int i = n; i >= 1; i--)
    {
        cout << 1 << ' ' << i << ' ';
        for (int j = 1; j <= n; j++)
        {
            cout << j << ' ';
        }
        cout << '\n';
        cout << 2 << ' ' << i << ' ';
        for (int j = 1; j <= n; j++)
        {
            cout << j << ' ';
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