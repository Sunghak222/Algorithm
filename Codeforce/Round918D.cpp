#include <iostream>
#include <string>

using namespace std;

int n;
bool split[200001];

void solve()
{
    cin >> n;
    string s;
    cin >> s;
    bool prev_is_C = (s[n-1] == 'a' || s[n-1] == 'e') ? false : true;
    for (int i = n-2; i >= 0; i--)
    {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
        {
            if (!prev_is_C)
            {
                split[i] = true;
                prev_is_C = true;
            }
        }
        else
        {
            prev_is_C = false;
        }
    }
    cout << s[0];
    for (int i = 1; i < n; i++)
    {
        if (split[i])
        {
            cout << '.';
        }
        cout << s[i];
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
        for (int j = 0; j < n; j++)
        {
            split[j] = 0;
        }
    }
}