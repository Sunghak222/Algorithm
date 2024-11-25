#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int num = v[0];
    int mn = 500000;
    int a(0);
    bool d = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != num)
        {
            d = true;
            mn = min(mn,a);
            a = 0;
        }
        else
        {
            a++;
        }
    }
    if (!d)
    {
        cout << -1 << '\n';
        return;
    }
    mn = min(mn,a);
    if (mn == 500000)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << mn << '\n';
    }
}
/* 
1
12
2 2 2 1 2 2 1 2 1 2 2 2
 */
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