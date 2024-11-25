#include <iostream>

using namespace std;

int a[200001];
int b[200001];

void clear_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
}
int solve()
{
    int n,k,temp,ans(0),curr(0);
    cin >> n >> k;
    cin >> a[0];
    for (int i = 1; i < n; i++) //get prefix sum for a
    {
        cin >> temp;
        a[i] = temp + a[i-1];
    }
    cin >> b[0];
    for (int i = 1; i < n; i++) //b[i] is the greatest number from b[0] to b[i]
    {
        cin >> temp;
        b[i] = (b[i-1] > temp) ? b[i-1] : temp;
    }
    
    if (n == 1)
    {
        ans += a[0];
        if (k > 1)
        {
            ans += b[0] * (k-1);
        }
        return ans;
    }

    if (n >= k)
    {
        ans += a[k-1];
    }
    else
    {
        ans += a[n-1];
        ans += b[n-1] * (k-n);
    }
    int i = (n > k) ? k-2 : n-2;
    for (i; i >= 0; i--)
    {
        curr = a[i] + b[i] * (k - i - 1);
        if (curr > ans)
        {
            ans = curr;
        }
    }
    clear_array(n);
    return ans;
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