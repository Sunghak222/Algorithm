#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define MOD 1000000007

using namespace std;

int n,k;
unsigned long long memo[300001];

int rec(int n)
{
    if (n == 0) return memo[0] = 1;
    if (n == 1) return memo[1] = 1;
    if (n == 2) return memo[2] = 3;
    unsigned long long a;
    unsigned long long b;

    if (memo[n-2] != 0)
    {
        a = memo[n-2]%MOD;
    }
    else
    {
        memo[n-2] = rec(n-2)%MOD;
        a = memo[n-2];
    }
    if (memo[n-1] != 0)
    {
        b = memo[n-1]%MOD;
    }
    else
    {
        memo[n-1] = rec(n-1)%MOD;
        b = memo[n-1];
    }
    memo[n] = (b + 2 * (n-1) * a) % MOD;

    return memo[n];
}
void solve()
{
    cin >> n >> k;
    int num(0);
    for (int i = 0; i < k; i++)
    {
        int tp1,tp2;
        cin >> tp1 >> tp2;
        if (tp1 == tp2) num++;
    }
    cout << rec(n-num-(k-num)*2) << '\n';
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