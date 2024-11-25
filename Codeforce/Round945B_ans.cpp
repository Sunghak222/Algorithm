#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int n,mx;
int arr[100001];
int bit[21];

void add_bit(int x)
{
    int idx = 0;
    while (x != 0)
    {
        if (x%2 == 1)
        {
            bit[idx]++;
        }
        idx++;
        x/=2;
    }
}
bool check_bit(int x)
{
    bool ok = true;
    int idx = 0;
    while (x != 0)
    {
        if (x%2 == 1)
        {
            if (bit[idx] == 1) ok = false;
            bit[idx]--;
        }
        idx++;
        x/=2;
    }
    return ok;
}
bool check(int mid)
{
    rep(i,0,mid-1)
    {
        int x = arr[i];
        add_bit(x);
    }
    rep(i,mid,n-1)
    {
        int x = arr[i];
        add_bit(x);
        if (!check_bit(arr[i-mid]))
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    cin >> n;
    rep(i,0,n-1)
    {
        cin >> arr[i];
        mx |= arr[i];
    }
    int curr = 0;
    int l(0);
    rep(i,0,n-1)
    {
        curr |= arr[i];
        if (curr == mx)
        {
            l = i;
            break;
        }
    }

    int r(n);
    while (l+1 < r)
    {
        int mid = (l+r)/2;
        if (check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
        rep(i,0,20)
        {
            bit[i] = 0;
        }
    }
    cout << l+1 << '\n';
    mx = 0;
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