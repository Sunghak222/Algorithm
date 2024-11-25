#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR\n";
        return;
    }
    else if (a < b && c < b)
    {
        cout << "PEAK\n";
        return;
    }
    cout << "NONE\n";
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