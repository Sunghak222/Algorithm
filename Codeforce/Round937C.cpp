#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    string time;
    cin >> time;
    bool is_AM = true;
    int h = (time[0]-'0')*10+(time[1]-'0');
    int m = (time[3]-'0')*10+(time[4]-'0');
    if (h >= 12) is_AM = false;
    if (h == 0) h = 12;
    if (h > 12) h -= 12;

    if (h < 10)
    {
        cout << 0 << h << ':';
    }
    else
    {
        cout << h << ':';
    }
    if (m < 10)
    {
        cout << 0 << m;
    }
    else cout << m;
    if (is_AM) cout << " AM\n";
    else cout << " PM\n";
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