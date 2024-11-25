#include <iostream>
#include <string>

using namespace std;

bool solve()
{
    int n;
    cin >> n;
    long long sum(0);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    long long lo = 1, hi = 20000001;
    long long mid;
    while (lo + 1 < hi)
    {
        mid = (lo + hi) / 2;
        if (mid * mid == sum)
        {
            return true;
        }
        else if (mid * mid > sum)
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    if (lo * lo == sum) return true;
/*     if (hi * hi == sum) return true;
    if (mid * mid == sum) return true; */
    //cout << lo << ' ' << hi << ' ' << mid << '\n';
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
        if (solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}   