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

int n;
int arr[200003],seq[200003];

int getGCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return (a>=b) ? a : b;
    }
    bool isBigger = (a>=b) ? 1 : 0;
    if (isBigger)
    {
        return getGCD(b,a%b);
    }
    else
    {
        return getGCD(a,b%a);
    }
}

bool check(int idx)//remove v[idx]
{
    if (idx == 0)
    {
        idx = 1;
    }
    else if (idx == 1)
    {
        int gcd = getGCD(arr[0],arr[2]);
        if (gcd <= seq[idx+1])
        {
            idx = idx+1;
        }
        else
        {
            return false;
        }
    }
    else if (idx == n-2)
    {
        int gcd = getGCD(arr[idx-1],arr[idx+1]);
        if (seq[idx-2] > gcd)
        {
            return false;
        }
        else return true;
    }
    else if (idx == n-1)
    {
        return true;
    }
    else
    {
        int gcd = getGCD(arr[idx-1],arr[idx+1]);
        if (seq[idx-2] > gcd || gcd > seq[idx+1])
        {
            return false;
        }
        idx = idx+1;
    }

    for (int i = idx; i < n-2; i++)
    {
        if (seq[i] > seq[i+1])
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
    }
    rep(i,0,n-2)
    {
        seq[i] = getGCD(arr[i],arr[i+1]);
    }
    rep(i,0,n-3)
    {
        if (seq[i] > seq[i+1])
        {
            if (check(i) || check(i+1) || check(i+2))
            {
                cout << "YES\n";
                return;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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