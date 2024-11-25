#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int minimum = min(a,min(b,c));
    int cnt(0);
    if (a % minimum != 0 || b % minimum != 0 || c % minimum != 0)
    {
        cout << "NO\n";
        return;
    }
    cnt += (a / minimum) - 1;
    cnt += (b / minimum) - 1;
    cnt += (c / minimum) - 1;
    if (cnt > 3)
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