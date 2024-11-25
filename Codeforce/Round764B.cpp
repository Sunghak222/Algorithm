#include <iostream>

using namespace std;

bool solve(int a, int b, int c)
{
    int diff;
    if ((a+c) % 2 == 0)
    {
        diff = (a+c)/2;
        if (diff != 0 && diff % b == 0)
        {
            return true;
        }
    }

    if ((2*b - c) != 0 && (2*b - c) % a == 0 && (2*b-c) >= a)
    {
        return true;
    }

    if ((2*b - a) >= c && (2*b - a) != 0 && (2*b - a) % c == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if (solve(a,b,c))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}