#include <iostream>

using namespace std;

int solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b)
    {
        return c;
    }
    else if (a == c)
    {
        return b;
    }
    else
    {
        return a;
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
        cout << solve() << '\n';
    }
}