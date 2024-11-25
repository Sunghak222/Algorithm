#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int a,b,c;
    int cnt(0);
    cin >> a >> b >> c;
    cnt += a;


    if (b%3 == 0)
    {
        cnt += b/3;
        cnt += (c % 3 == 0) ? c/3 : c/3+1;
        cout << cnt << '\n';
        return;
    }
    if (3-(b%3) > c)
    {
        cout << -1 << '\n';
        return;
    }
    else if (3-(b%3) == c)
    {
        cnt += b/3+1;
        cout << cnt << '\n';
        return;
    }
    else // < c
    {
        if (b%3 == 0)
        {
            cnt += b/3;
            cnt += (c % 3 == 0) ? c/3 : c/3+1;
            cout << cnt << '\n';
            return;
        }
        else
        {
            cnt += b/3+1;
            c -= 3-(b%3);
            cnt += (c % 3 == 0) ? c/3 : c/3+1;
            cout << cnt << '\n';
            return;
        }
    }
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