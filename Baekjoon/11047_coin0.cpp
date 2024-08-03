#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,temp,cnt(0);
    cin >> n >> k;
    vector<int> coins;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        coins.push_back(temp);
    }
    while (k != 0)
    {
        for (int i = n-1; i >= 0; i--)
        {
            if (coins[i] <= k)
            {
                cnt++;
                k -= coins[i];
                break;
            }
        }
    }
    cout << cnt;
}