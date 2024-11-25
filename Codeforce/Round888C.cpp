#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i;
    int target = arr[0];
    int cnt(0);
    if (arr[0] == arr[n-1])
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] == target)
            {
                cnt++;
            }
        }
        if (cnt >= k)
        {
            cout << "YES\n";
            return;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (cnt == k)
        {
            break;
        }
        if (target == arr[i])
        {
            cnt++;
        }
    }
    if (cnt < k)
    {
        cout << "NO\n";
        return;
    }
    cnt = 0;
    target = arr[n-1];
    for (i; i < n; i++)
    {
        if (target == arr[i])
        {
            cnt++;
        }
    }
    if (cnt >= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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