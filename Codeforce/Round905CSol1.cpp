#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans(5);
    if (k == 4)
    {
        int num_of_even(0);
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 4 == 0)
            {
                return 0;
            }
            else if (v[i] % 4 == 3)
            {
                ans = 1;
            }
            if (v[i] % 2 == 0)
            {
                num_of_even++;
            }
        }
        if (num_of_even > 1)
        {
            return 0;
        }
        else if (num_of_even == 1)
        {
            return 1;
        }
        else
        {
            if (ans > 2)
            {
                return 2;
            }
            return ans;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k == 0)
            {
                return 0;
            }
            ans = min(ans,k-(v[i]%k));
        }
    }
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