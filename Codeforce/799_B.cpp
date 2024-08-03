#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,n,temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> a;
        vector<int> f;

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        f.push_back(a[0]);
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < f.size(); k++)
            {
                if (a[j] == f[k])
                {
                    break;
                }
                if (k == f.size()-1 && !(a[j] == f[k]))
                {
                    f.push_back(a[j]);
                }
            }
        }

        if ((n - f.size())%2 == 0)
        {
            cout << f.size() << endl;
        }
        else if ((n - f.size())%2 != 0)
        {
            cout << f.size()-1 << endl;
        }
    }
}