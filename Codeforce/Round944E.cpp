#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;
/* 
1
1000000000 2 1
1 1000000000
3 1000000000
500000001
 */
int a[100001];
int b[100001];
void solve()
{
    int n,k,q;
    cin >> n >> k >> q;
    rep(i,0,k-1)
    {
        cin >> a[i];
    }
    rep(i,0,k-1)
    {
        cin >> b[i];
    }
    int temp;
    rep(i,0,q-1)
    {
        cin >> temp;
        int lo(0),hi(k);
        while (lo+1 < hi)
        {
            int mid = (lo+hi)/2;
            if (temp < a[mid])
            {
                hi = mid;
            }
            else if (temp > a[mid])
            {
                lo = mid;
            }
            else if (temp == a[mid])
            {
                lo = mid;
                break;
            }
        }
        if (temp > a[lo]) lo++;
        if (lo == 0)
        {
            cout << (1ll*temp*b[lo]/a[lo]) << ' ';
        }
        else
        {
            cout << (b[lo-1]+(1ll*(temp-a[lo-1])*(b[lo]-b[lo-1])/(a[lo]-a[lo-1]))) << ' ';
        }
    }
    cout << '\n';
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