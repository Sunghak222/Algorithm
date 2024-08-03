#include <iostream>
#include <vector>

using namespace std;

int GetNum(vector<vector<char>> a, int x, int y)
{
    char prev_char1 = 'W';
    char prev_char2 = 'B';
    int cnt1(0),cnt2(0);

    for (int i = y; i < y+8; i++)
    {
        for (int j = x; j < x+8; j++)
        {
            if (i > y && j == x)
            {
                if (a[i][j] != prev_char1)
                {
                    cnt1++;
                }
                continue;
            }
            if (a[i][j] == prev_char1)
            {
                cnt1++;
                prev_char1 = (prev_char1 == 'B') ? 'W' : 'B';
            }
            else
            {
                prev_char1 = (prev_char1 == 'B') ? 'W' : 'B';
            }
        }
    }

    for (int i = y; i < y+8; i++)
    {
        for (int j = x; j < x+8; j++)
        {
            if (i > y && j == x)
            {
                if (a[i][j] != prev_char2)
                {
                    cnt2++;
                }
                continue;
            }
            if (a[i][j] == prev_char2)
            {
                cnt2++;
                prev_char2 = (prev_char2 == 'B') ? 'W' : 'B';
            }
            else
            {
                prev_char2 = (prev_char2 == 'B') ? 'W' : 'B';
            }
        }
    }
    return (cnt1 > cnt2) ? cnt2 : cnt1;
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector <vector <char>> input;
    vector <char> inputt;
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            inputt.push_back(temp);
        }
        input.push_back(inputt);
        inputt.clear();
    }
    int min(n*m),a;
    
    for (int i = 0; i < n-8+1; i++)
    {
        for (int j = 0; j < m-8+1; j++)
        {
            a = GetNum(input,j,i);
            if (a < min)
            {
                min = a;
            }
        }
    }
    cout << min;
}