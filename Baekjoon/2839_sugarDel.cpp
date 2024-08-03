#include <iostream>

using namespace std;

int solve(int n)
{
    int num(0);
    while (n >= 0)
    {
        if (n%5 == 0)
        {
            num += n/5;
            return num;
        }
        else
        {
            n -= 3;
            num++;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    cout << solve(n);
}