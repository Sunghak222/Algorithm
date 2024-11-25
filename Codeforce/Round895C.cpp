#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
/* 
1
9999991 9999991
 */
bool isPrime(int temp)
{
    if (temp < 2)
    {
        return false;
    }

    for (int i = 2; i*i <= temp; i++)
    {
        if (temp%i == 0)
        {
            return false;
        }
    }
    return true;
}

int getGCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return (a>=b) ? a : b;
    }
    bool isBigger = (a>=b) ? 1 : 0;
    if (isBigger)
    {
        return getGCD(b,a%b);
    }
    else
    {
        return getGCD(a,b%a);
    }
}

void solve()
{
    int l,r;
    cin >> l >> r;

    for (int num = l; num <= r; num++)
    {
        int a(2),b(num-2);
        if (isPrime(num)) continue;
        while (a <= b)
        {
            int gcd = getGCD(a,b);
            if (gcd != 1)
            {
                cout << a << ' ' << b << '\n';
                return;
            }
            a++;
            b--;
        }
    }
    cout << -1 << '\n';
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