#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[10];
    int min(11),min_idx;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (min > arr[i])
        {
            min = arr[i];
            min_idx = i;
        }
    }
    int ret(1);
    for (int i = 0; i < n; i++)
    {
        if (i == min_idx)
        {
            ret *= arr[i] + 1;
            continue;
        }
        ret *= arr[i];
    }
    return ret;
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