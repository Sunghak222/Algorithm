#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cmath>
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


void solve()
{
    int n,k;
    cin >> n >> k;
    int start = n-k+1;
    int end = n;
    int oddNum(0);

    if (end == start) oddNum += (end%2 == 1);
    else 
    {
        int evenNum(0);
        if (end%2 == 0) evenNum++;
        if (start%2 == 0) evenNum++;
        if (evenNum == 2) oddNum = (end-start)/2;
        else oddNum = (end-start)/2 + 1;
    }
    if (oddNum%2 == 0) cout << "YES\n";
    else cout << "NO\n";
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