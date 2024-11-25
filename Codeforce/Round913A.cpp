#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string input;
    cin >> input;
    for (int i = 1; i <= 8; i++)
    {
        if (input[1]-'0' == i)
        {
            continue;
        }
        cout << input[0];
        cout << i << '\n';
    }

    for (int i = 0; i < 8; i++)
    {
        if (input[0] == ('a'+i))
        {
            continue;
        }
        cout << char('a'+i);
        cout << input[1] << '\n';
    }
    return;
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