#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    vector<char> check;
    string input;
    for (int i = 0; i < t; i++)
    {
        int cnt(0);
        cin >> n;
        cin >> input;
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < check.size(); j++)
            {
                if (input[i] == check[j])
                {
                    flag = false;
                }
            }
            if (flag)
            {
                cnt += 2;
            }
            else
            {
                cnt++;
            }
            check.push_back(input[i]);
        }
        cout << cnt << endl;
        input.clear();
        check.clear();
    }
}