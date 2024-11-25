#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string input;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> input;
        int str_len = input.size();
        int numB(0),numb(0);
        stack<int> del;
        for (int i = str_len-1; i >= 0; i--)
        {
            char curr = input[i];
            if (curr == 'B')
            {
                del.push(i);
                numB++;
            }
            else if (curr == 'b')
            {
                numb++;
                del.push(i);
            }
            else
            {
                if ('A' <= curr  && curr <= 'Z' && numB > 0)
                {
                    del.push(i);
                    numB--;
                }
                else if ('a' <= curr && curr <= 'z' && numb > 0)
                {
                    del.push(i);
                    numb--;
                }
            }
        }
        for (int i = 0; i < str_len; i++)
        {
            if (!del.empty() && i == del.top())
            {
                del.pop();
                continue;
            }
            cout << input[i];
        }
        cout << '\n';
    }
}