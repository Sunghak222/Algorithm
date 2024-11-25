#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "bca" || s == "cab")
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