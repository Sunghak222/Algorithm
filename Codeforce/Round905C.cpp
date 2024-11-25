#include <iostream>
#include <string>
#include <vector>
#define forn for (int i = 0; i < n; i++)

using namespace std;

//Accepted.

int solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    forn
    {
        cin >> v[i];
    }
    int ans(10);
    if (k == 2)
    {
        forn
        {
            if (v[i] % 2 == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    else if (k == 3)
    {
        forn
        {
            if (v[i] % 3 == 0)
            {
                return 0;
            }
            else if (v[i] % 3 == 2)
            {
                ans = 1;
            }
            else
            {
                if (ans == 10)
                {
                    ans = 2;
                }
            }
        }
        return ans;
    }
    else if (k == 4)
    {
        bool had_one(false);
        bool had_two(false);
        forn
        {
            if (v[i] % 4 == 0)
            {
                return 0;
            }
            else if (v[i] % 4 == 3)
            {
                ans = 1;
            }
            else if (v[i] % 4 == 2)
            {
                if (!had_two)
                {
                    had_two = true;
                    if (had_two > 2)
                    {
                        ans = 2;
                    }
                }
                else if (had_two)
                {
                    return 0;
                }
            }
            else
            {
                if (had_one && ans > 2)
                {
                    ans = 2;
                }
                if (!had_one)
                {
                    had_one = true;
                    if (ans > 3)
                    {
                        ans = 3;
                    }
                }
            }
        }
        if (had_one && had_two && ans > 1)
        {
            ans = 1;
        }
        return ans;
    }
    else
    {
        forn
        {
            if (v[i]%k == 0)
            {
                return 0;
            }
            if (ans > k-(v[i]%k))
            {
                ans = k-(v[i]%k);
            }
        }
        return ans;
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