#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int sum1(0),sum2(0);
        for (int j = 0; j < 3; j++)
        {
            sum1 += (s[j]-'0');
        }
        for (int j = 3; j < 6; j++)
        {
            sum2 += (s[j]-'0');
        }
        if (sum1 == sum2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}