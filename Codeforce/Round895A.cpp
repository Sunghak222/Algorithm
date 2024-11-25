#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int cnt(0);
    if (a != b)
    {
        if (a > b)
        {
            if (((a-b)%c) == 0 && ((a-b)/c)%2 == 0)
            {
                cnt += (a-b)/c/2;
            }
            else
            {
                cnt += (a-b)/c/2+1;
            }
        }
        else
        {
            if (((b-a)%c) == 0 && ((b-a)/c)%2 == 0)
            {
                cnt += (b-a)/c/2;
            }
            else
            {
                cnt += (b-a)/c/2+1;
            }
        }
    }
    return cnt;
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