#include <iostream>

using namespace std;

int solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
    }
}