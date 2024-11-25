#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    int d,s,k;
    cin >> d >> s;
    k = d+(s-1)/2;
    for (int i = 1; i < n; i++)
    {
        cin >> d >> s;
        if (k > d+(s-1)/2)
        {
            k = d+(s-1)/2;
        }
    }
    return k;
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