#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n;
    cin >> n;
    int arr[200001];
    bool dp[200001];
    vector<int> v;
    rep(i,0,n-1)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll sum(0);
    rep(i,0,n-1)
    {
        if (arr[i] - sum > 0)
        {
            v.push_back(arr[i] - sum);
            sum += arr[i] - sum;
        }
    }
    bool isA = true;
    int idx(v.size()-2);
    dp[idx+1] = true;
    per(i,idx,0)
    {
        if (dp[i+1])
        {
            if (v[i] > 1)
            {
                dp[i] = true;
            }
            else if (v[i] == 1)
            {
                dp[i] = false;
            }
        }
        else if (!dp[i+1])
        {
            dp[i] = true;
        }
    }
    if (dp[0])
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
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