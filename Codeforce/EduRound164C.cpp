#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    string a,b;
    cin >> a >> b;
    int sz = a.size();
    bool is_diff = false;
    bool bigger_a = (a>b) ? true : false;
    string c,d;
    for (int i = 0; i < sz; i++)
    {
        if (a[i] == b[i])
        {
            c += a[i];
            d += a[i];
        }
        if (!is_diff && a[i] != b[i])
        {
            is_diff = true;
            c += a[i];
            d += b[i];
            continue;
        }
        if (a[i] != b[i])
        {
            if (bigger_a)
            {
                if (a[i] > b[i])
                {
                    c += b[i];
                    d += a[i];
                }
                else
                {
                    c += a[i];
                    d += b[i];
                }
            }
            else
            {
                if (a[i] < b[i])
                {
                    c += b[i];
                    d += a[i];
                }
                else
                {
                    c += a[i];
                    d += b[i];
                }
            }
        }
    }
    cout << c << '\n' << d << '\n';
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