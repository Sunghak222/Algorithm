#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    int a = (n%m == 0) ? n-n/m : n-n/m-1;
    if (a > k)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
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