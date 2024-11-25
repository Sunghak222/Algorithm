#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<pair<int,int>> v, int n, int k)
{
    int ll(0),rr(0);
    for (int i = 0; i < n; i++)
    {
        ll = max(ll - k, v[i].first);
        rr = min(rr + k, v[i].second);
        if (ll > rr)
        {
            return false;
        }
    }
    return true;
}
int solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        v.push_back(make_pair(temp1,temp2));
    }

    int lo(0),hi(1100000000);
    while (lo + 1 < hi)
    {
        int mid = (lo + hi) / 2;
        if (!check(v,n,mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    if (check(v,n,lo))
    {
        return lo;
    }
    return hi;
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