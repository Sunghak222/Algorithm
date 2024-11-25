#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
// 25 28 27
void solve()
{
    int n;
    int arr[51];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prev = arr[n-1];
    bool flag = false;
    for (int i = n-1; i > 0; i--)
    {
        if (arr[i-1] > prev)
        {   
            flag = true;
            int tenth = arr[i-1]/10;
            int oneth = arr[i-1]%10;
            if (tenth > oneth || oneth > prev)
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            flag = false;
        }
        prev = (flag) ? ((arr[i-1] > 9) ? arr[i-1]/10 : arr[i-1]) : arr[i-1];
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