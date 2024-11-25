#include <iostream>
#include <string>

using namespace std;

int solve()
{
    string s[10];
    int score(0);
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'X')
            {
                if (j >= i && j <= 9 - i)
                {
                    score += i + 1;
                }
                else
                {
                    score += (j < i) ? (j + 1) : (10 - j);
                }
            }
        }
    }
    for (int i = 5; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'X')
            {
                if (j >= 9 - i && j <= 9 - (9 - i))
                {
                    score += (9 - i) + 1;
                }
                else
                {
                    score += (j < 9 - i) ? (j + 1) : (10 - j);
                }
            }
        }
    }
    return score;
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