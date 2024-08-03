#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, temp;
        vector<int> input;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            input.push_back(temp);
        }
        sort(input.begin(),input.end());
        int sum(0);
        for (int j = 0; j < k; j++)
        {
            sum += input[j];
        }
    }
}