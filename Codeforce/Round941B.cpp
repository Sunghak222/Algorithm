#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; j >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n,m;
    cin >> n >> m;
    char arr[501][501];
    bool allB(true),allW(true);
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'W')
            {
                allB = false;
            }
            else if (arr[i][j] == 'B')
            {
                allW = false;
            }
        }
    }
    if (allB || allW)
    {
        cout << "YES\n";
        return;
    }
    if (n == 1)
    {
        if (arr[0][0] == arr[0][m-1])
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    else if (m == 1)
    {
        if (arr[0][0] == arr[n-1][0])
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    bool a1(false),a2(false),a3(false),a4(false);
    bool a1B,a2B,a3B,a4B;
    bool is_white((arr[0][0] == 'W') ? true : false);
    bool is_black(false);
    rep(i,1,n-1)
    {
        is_black = (arr[i][0] == 'B' ? true : false);
        if (is_white && is_black)
        {
            a1 = true;
            break;
        }
        if (!is_white && !is_black)
        {
            a1 = true; 
            break;
        }
    }

    a1B = (arr[0][0] == 'B' ? true : false);

    is_white = (arr[0][0] == 'W') ? true : false;
    is_black = false;
    rep(i,1,m-1)
    {
        is_black = (arr[0][i] == 'B' ? true : false);
        if (is_white && is_black)
        {
            a2 = true;
            break;
        }
        if (!is_white && !is_black)
        {
            a2 = true; 
            break;
        }
    }

    a2B = (arr[0][0] == 'B' ? true : false);

    is_white = (arr[0][m-1] == 'W') ? true : false;
    is_black = false;
    rep(i,1,n-1)
    {
        is_black = (arr[i][m-1] == 'B' ? true : false);
        if (is_white && is_black)
        {
            a3 = true;
            break;
        }
        if (!is_white && !is_black)
        {
            a3 = true; 
            break;
        }
    }

    a3B = (arr[0][m-1] == 'B' ? true : false);
    
    is_white = (arr[n-1][0] == 'W') ? true : false;
    is_black = false;
    rep(i,1,m-1)
    {
        is_black = (arr[n-1][i] == 'B' ? true : false);
        if (is_white && is_black)
        {
            a4 = true;
            break;
        }
        if (!is_white && !is_black)
        {
            a4 = true; 
            break;
        }
    }
    a4B = (arr[n-1][0] == 'B' ? true : false);

    if (!a1 && !a3 && (a1B != a3B))
    {
        cout << "NO\n";
        return;
    }
    if (!a2 && !a4 && a2B != a4B)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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