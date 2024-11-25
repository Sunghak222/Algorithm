#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int n;
bool solved;
bool isused[2][200001];
string s[2];

void solve(int x, int y)
{
    if (solved) return;
    if (x != 0 && x != 1)
    {
        return;
    }
    if (y < 0 || y >= n)
    {
        return;
    }
    if (isused[x][y]) return;
    isused[x][y] = true;
    if (s[x][y] == '<')
    {
        return;
    }
    if ((x == 0 && y == 0) || (x == 0 && y == 1) || (x == 1 && y == 0))
    {
        cout << "YES\n";
        solved = true;
        return;
    }
    if (x == 0)
    {
        solve(x,y-2);
        solve(x+1,y-1);
    }
    else
    {
        solve(x,y-2);
        solve(x-1,y-1);
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
        cin >> n;
        cin >> s[0] >> s[1];
        solve(1,n-2);
        if (!solved) cout << "NO\n";
        solved = false;
        for (int i = 0; i < n; i++)
        {
            isused[0][i] = false;
            isused[1][i] = false;
        }
    }
}