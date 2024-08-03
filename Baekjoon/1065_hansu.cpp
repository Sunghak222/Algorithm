#include <iostream>

using namespace std;

int inspect(int num)
{
    int hundredth,tenth,oneth,d;
    hundredth = num/100;
    tenth = num/10%10;
    oneth = num%10;

    if (num < 100 && num > 0)
    {
        return 1;
    }

    d = tenth - hundredth;

    if (oneth - tenth == d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, cnt(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (inspect(i) == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
}