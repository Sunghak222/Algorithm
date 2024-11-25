#include <iostream>
#include <algorithm>

using namespace std;

int solve()
{
    int n,k;
    cin >> n >> k;
    int a[200001],h[200001],temp;
    cin >> a[0];
    for (int i = 1; i < n; i++) //get prefix sum
    {
        cin >> temp;
        a[i] = a[i-1] + temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int ret(0),s(0),e(0);
    while (s < n && e < n)
    {
        if (s == e+1)
        {
            e = s;
        }
        if (s != 0 && a[e] - a[s-1] > k)
        {
            ret = max(ret,e-s);
            s++;
        }
        else if (s == 0 && a[e] > k)
        {
            ret = (e == 0) ? max(ret,0) : max(ret,e-s);
            s++;
        }

        if (e < n-1 && h[e] % h[e+1] == 0)
        {   
            e++;
        }
        else
        {
            if (s != 0 && a[e] - a[s-1] <= k)
            {
                ret = max(ret,e-s+1);
            }
            else if (s == 0 && a[e] <= k)
            {
                ret = max(ret,e+1);
            }
            s++;
        }
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