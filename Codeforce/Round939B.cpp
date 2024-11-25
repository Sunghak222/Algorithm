#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n;
    int arr[200001] = {0};
    cin >> n;
    int num,ans(0);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 2)
        {
            ans++;
        }
    }
    cout << ans << '\n';
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