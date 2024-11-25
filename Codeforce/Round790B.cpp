#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,temp;
    cin >> t;
    vector<int> input;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int minimum,sum(0);
        cin >> minimum;
        input.push_back(minimum);
        for (int j = 1; j < n; j++)
        {
            cin >> temp;
            input.push_back(temp);
            if (temp < minimum)
            {
                minimum = temp;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (input[j] > minimum)
            {
                sum += input[j] - minimum;
            }
        }
        cout << sum << '\n';
        input.clear();
    }
}