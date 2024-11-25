#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

long getGCD(long a, long b)
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
/* 1
41843903 92785 57840 */
long long solve()
{
    long long n,x,y;
    cin >> n >> x >> y;
    if (x == y) return 0;
    long long MulX = n/x;
    long long MulY = n/y;
    long long gcd = getGCD(x,y);
    long long MulLCM = n/(x*y/gcd);

    long long ans(0);
    long long l = n-(MulX-MulLCM)+1;
    long long r = n;
    ans += (l+r)*(r-l+1)/2;
    l = 1;
    r = MulY-MulLCM;
    ans -= (l+r)*(r-l+1)/2;
    /* for (int i = 0; i < MulX-MulLCM; i++) //time limit exceeded
    {
        ans += n-i;
    }
    for (int i = 0; i < MulY-MulLCM; i++)
    {
        ans -= 1+i;
    } */
    return ans;
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