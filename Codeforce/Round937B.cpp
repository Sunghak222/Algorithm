#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    bool is_sharp(true);
    for (int i = 0; i < 2*n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (is_sharp)
            {
                cout << "##";
                is_sharp = false;
            }
            else
            {
                cout << "..";
                is_sharp = true;
            }
        }
        if (n % 2 == 0 && i % 2 == 1)
        {
            is_sharp = (is_sharp) ? false : true;
        }
        else if (n%2 == 1 && i%2 == 0)
        {
            is_sharp = (is_sharp) ? false : true;
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}