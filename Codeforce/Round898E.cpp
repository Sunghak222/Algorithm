#include <iostream>
#include <string>

using namespace std;

int n,x;

bool check(long long mid, int arr[])
{
    long long curr(0);
    for (int i = 0; i < n; i++)
    {
        curr += (mid > arr[i]) ? (mid - arr[i]) : 0;
        if (curr > x) return false;
    }
    return true;
}
int solve()
{
    cin >> n >> x;
    int arr[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long lo(1),hi(2000000000),mid;
    while (lo + 1 < hi)
    {
        mid = (lo + hi) / 2;
        if (check(mid,arr))
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    if (check(hi,arr)) return hi;
    if (check(mid,arr)) return mid;
    return lo;
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