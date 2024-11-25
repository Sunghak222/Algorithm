#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

const int m = 998244353;
void solve()
{
    int n;
    int arr[5001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    unsigned long long ans = 0;
    unsigned long long plus = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            plus *= 2;
            plus %= m;
        }
        plus *= arr[i];
        plus %= m;
        ans += plus;
        ans %= m;
        plus = 1;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}