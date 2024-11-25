#include <iostream>
#include <algorithm>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    int max_a[3][2] = {0},max_b[3][2] = {0},max_c[3][2] = {0};
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max_a[0][0])
        {
            max_a[2][1] = max_a[1][1];
            max_a[1][1] = max_a[0][1];
            max_a[0][1] = i;

            max_a[2][0] = max_a[1][0];
            max_a[1][0] = max_a[0][0];
            max_a[0][0] = temp;
        }
        else if (temp > max_a[1][0])
        {
            max_a[2][1] = max_a[1][1];
            max_a[1][1] = i;

            max_a[2][0] = max_a[1][0];
            max_a[1][0] = temp;
        }
        else if (temp > max_a[2][0])
        {
            max_a[2][1] = i;

            max_a[2][0] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max_b[0][0])
        {
            max_b[2][1] = max_b[1][1];
            max_b[1][1] = max_b[0][1];
            max_b[0][1] = i;

            max_b[2][0] = max_b[1][0];
            max_b[1][0] = max_b[0][0];
            max_b[0][0] = temp;
        }
        else if (temp > max_b[1][0])
        {
            max_b[2][1] = max_b[1][1];
            max_b[1][1] = i;

            max_b[2][0] = max_b[1][0];
            max_b[1][0] = temp;
        }
        else if (temp > max_b[2][0])
        {
            max_b[2][1] = i;

            max_b[2][0] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max_c[0][0])
        {
            max_c[2][1] = max_c[1][1];
            max_c[1][1] = max_c[0][1];
            max_c[0][1] = i;

            max_c[2][0] = max_c[1][0];
            max_c[1][0] = max_c[0][0];
            max_c[0][0] = temp;
        }
        else if (temp > max_c[1][0])
        {
            max_c[2][1] = max_c[1][1];
            max_c[1][1] = i;

            max_c[2][0] = max_c[1][0];
            max_c[1][0] = temp;
        }
        else if (temp > max_c[2][0])
        {
            max_c[2][1] = i;

            max_c[2][0] = temp;
        }
    }
    int ans(0);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (max_a[i][1] == max_b[j][1] || max_a[i][1] == max_c[k][1] || max_b[j][1] == max_c[k][1])
                {
                    continue;
                }
                temp = max_a[i][0] + max_b[j][0] + max_c[k][0];
                if (temp > ans)
                {
                    ans = temp;
                }
            }
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