#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int n;
    string s;
    cin >> n >> s;
    int end = n-1;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1] && s[i] == '*')
        {
            end = i;
            break;
        }
    }
    int cnt(0);
    for (int i = 0; i <= end; i++)
    {
        if (s[i] == '@')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << solve() << '\n';
    }
}