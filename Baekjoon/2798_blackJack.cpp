#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n,m,sum,max(0);
    cin >> n >> m;
    vector<int> num(n);    
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                sum = num[i]+num[j]+num[k];
                if (sum <= m && sum > max)
                {
                    max = sum;
                }
            }
        }
    }
    cout << max;
    
}