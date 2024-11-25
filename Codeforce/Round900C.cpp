#include <iostream>
#include <string>

using namespace std;

bool solve()
{
    long long n,k;
    long long x;
    cin >> n >> k >> x;
    long long minsum(0),maxsum(0);
    minsum = k*(k+1)/2;
    maxsum = (2*n-k+1)*k/2;
    //cout << maxsum << ' ' << minsum << '\n';
    if (x >= minsum && x <= maxsum) 
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