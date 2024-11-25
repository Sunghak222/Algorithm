#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int n,m,cnt(0);
    string x,s;
    cin >> n >> m >> x >> s;
    while (m > n)
    {
        x += x;
        n *= 2;
        cnt++;
    }
    string sub;
    for (int i = 0; i < n; i++)
    {
        sub = x.substr(i,m);
        if (sub == s)
        {
            return cnt;
        }
    }
    x += x;
    n *= 2;
    cnt++;
    for (int i = 0; i < n; i++)
    {
        sub = x.substr(i,m);
        if (sub == s)
        {
            return cnt;
        }
    }
    return -1;
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