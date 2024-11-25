#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long arr[200001];
    vector<bool> check(n,false);
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    long long target(0);
    if (arr[0] <= n)
    {
        check[arr[0]] = true;
    }
    else
    {
        target = arr[0];
    }
    long long diff;
    for (int i = 1; i < n-1; i++)
    {
        diff = arr[i] - arr[i-1];

        if (diff > n)
        {
            target = diff;
        }
        else if (check[diff])
        {
            target = diff;
        }
        else if (diff <= n)
        {
            check[diff] = true;
        }
    }

    if (target == 0)
    {
        target = ((1+n)*n/2) - arr[n-2];
    }
    long long sum(0);
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            sum += i;
        }
    }
    if (sum == target)
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