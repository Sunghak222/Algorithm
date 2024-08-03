#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    string num = "";
    int number(0);
    int ans(0);
    bool inParenthesis = false;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]>=48 && a[i]<=57)
        {
            num += a[i];
        }
        else if (a[i] == '+')
        {
            number = stoi(num);
            num = "";
        }
        else if (a[i] == '-')
        {
            number = stoi(num);
            num = "";
            if (!inParenthesis)
            {
                inParenthesis = true;
                ans += number;
                number = 0;
            }
        }
        if (i == a.size()-1)
        {
            number = stoi(num);
            num = "";
        }
        if (inParenthesis)
        {
            ans -= number;
            number = 0;
        }
        else if (!inParenthesis)
        {
            ans += number;
            number = 0;
        }
    }
    cout << ans;
}