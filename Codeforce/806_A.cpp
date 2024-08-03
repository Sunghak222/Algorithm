#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string input;
    vector<string> a;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    string s[8] = {"YES","YEs","YeS","yES","Yes","yeS","yEs","yes"};
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < 8; j++)
        {
            if (a[i] == s[j])
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}