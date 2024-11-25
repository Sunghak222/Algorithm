#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    int i;
    if (k == 0)
    {
        for (i = n; i > 0; i--)
        {
            cout << i << ' ';
        }
        return;
    }
    for (i = 1; i <= k; i++)
    {
        cout << i << ' ';
    }
    for (i = n; i > k; i--)
    {
        cout << i << ' ';
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
        cout << '\n';
    }
}