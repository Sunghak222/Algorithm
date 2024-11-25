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
    while (s < n && e < n) //한 루프에 e++ s++ 둘중 하나만.
    {
        if (e+1 == s)
        {
            e = s;
            continue;
        }
        int curr = (s == 0) ? a[e] : a[e] - a[s-1];
        if (curr <= k)
        {
            ret = max(ret,e-s+1);
            if (e+1 < n)
            {
                if (h[e] % h[e+1] == 0)
                {
                    e++;
                    continue;
                }
            }
            s++;
            continue;
        }
        else
        {
            ret = max(ret,e-s);
            s++;
            continue;
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