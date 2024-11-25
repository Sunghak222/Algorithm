#include <iostream>
#include <string>

using namespace std;

char solve()
{
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    bool A(false),B(false),C(false);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == '?')
            {
                for (int k = 0; k < 3; k++)
                {
                    if (s[i][k] == 'A')
                    {
                        A = true;
                    }
                    else if (s[i][k] == 'B')
                    {
                        B = true;
                    }
                    else
                    {
                        C = true;
                    }
                }
            }
        }
    }
    if (!A)
    {
        return 'A';
    }
    else if (!B)
    {
        return 'B';
    }
    return 'C';
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