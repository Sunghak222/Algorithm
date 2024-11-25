#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solve()
{
    int n,m,k,h,cnt(0);
    cin >> n >> m >> k >> h;
    int arr[51];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int diff = (h > arr[i]) ? h - arr[i] : arr[i] - h;
        if (diff == 0) continue;
        if (diff <= (m-1)*k && diff % k == 0)
        {
           cnt++;
        }
    }
    return cnt;
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