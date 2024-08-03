#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t,n;
    string temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<string> a;
        vector<string> store;
        vector<int> check(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                temp = a[j] + a[k];
                for (int r = 0; r < n; r++)
                {
                    if (temp == store[r])
                    {
                        break;
                    }
                    if (temp == a[r])
                    {
                        check[r] = 1;
                    }
                }
                store.push_back(temp);
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << check[j];
        }
        cout << endl;
    }
}