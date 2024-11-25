#include <iostream>
#include <string>

using namespace std;

int alp[26];

void reinitialize()
{
    for (int i = 0; i < 26; i++)
    {
        alp[i] = 0;
    }
}
void solve()
{
    int n,cnt(0);
    cin >> n;
    string input;
    cin >> input;
    for (int i = 0; i < n; i++)
    {
        alp[input[i]-'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] > i)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
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
        reinitialize();
    }
}