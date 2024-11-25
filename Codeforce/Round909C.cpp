#include <iostream>
#include <algorithm>

using namespace std;

int n;
int memo[200001];

void reset_arr()
{
    for (int i = 0; i < n; i++)
    {
        memo[i] = 0;
    }
}
int solve()
{
    cin >> n;

    int temp,curr(0);
    cin >> temp;
    int maxx = temp;
    memo[0] = temp;

    bool prev_is_even = (temp % 2 == 0);
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        if (prev_is_even)
        {
            if (temp % 2 == 0)
            {
                memo[i] = temp;
                if (temp > maxx)
                {
                    maxx = temp;
                }
            }
            else
            {
                curr = max(temp, memo[i-1] + temp);
                memo[i] = curr;
                if (curr > maxx)
                {
                    maxx = curr;
                }
                prev_is_even = false;
            }
        }
        else
        {
            if (temp % 2)
            {
                memo[i] = temp;
                if (temp > maxx)
                {
                    maxx = temp;
                }
            }
            else
            {
                curr = max(temp, memo[i-1] + temp);
                memo[i] = curr;
                if (curr > maxx)
                {
                    maxx = curr;
                }
                prev_is_even = true;
            }
        }
    }
    return maxx;
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