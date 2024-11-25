#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    string temp;
    vector<string> input;
    vector<string> all_cases;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            input.push_back(temp);
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                all_cases.push_back(input[j]+input[k]);
                all_cases.push_back(input[k]+input[j]);
            }
        }
        for (int j = 0; j < n; j++)
        {
            bool yes = false;
            for (auto k : all_cases)
            {
                if (input[j] == k)
                {
                    yes = true;
                    break;
                }
            }
            if (yes)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        input.clear();
        all_cases.clear();
        cout << '\n';
    }
}