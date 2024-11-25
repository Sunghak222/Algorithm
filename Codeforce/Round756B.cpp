#include <iostream>

using namespace std;
/* 
3
28 33
7 25
28 51

15
7
19
 */
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long ans(0);
        long long a,b;
        int diff;
        cin >> a >> b;
        while (a+b >= 4 && a > 0 && b > 0)
        {
            diff = (a > b) ? a-b : b-a;
            if (3*a <= b)
            {
                ans += a;
                b -= 3*a;
                a -= a;
            }
            else if (a >= 3*b)
            {
                ans += b;
                a -= 3*b;
                b -= b;
            }
            else if (a > b)
            {
                if (diff >= 2)
                {
                    ans += diff/2;
                    a -= (diff/2)*3;
                    b -= (diff/2)*1;
                    continue;
                }
                ans += (b/2);
                a -= (b/2)*2;
                b -= (b/2)*2;
            }
            else 
            {
                if (diff >= 2)
                {
                    ans += diff/2;
                    a -= (diff/2)*1;
                    b -= (diff/2)*3;
                    continue;
                }
                ans += (a/2);
                b -= (a/2)*2;
                a -= (a/2)*2;
            }
        }
        cout << ans << '\n';
    }
}