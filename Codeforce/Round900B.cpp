#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a = -1;
    for (int i = 0; i < n; i++)
    {
        a += 2;
        cout << a << ' ';
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