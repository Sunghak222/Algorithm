#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t,n,q;
long long x;
vector<int> candies;
long long cumsum[150004];

bool cmp(int a, int b)
{
    return a > b;
}
void reset_cumsum()
{
    for (int j = 0; j < n; j++)
    {
        cumsum[j] = 0;
    }
}
int bs(long long x)
{
    int low(1),high(n),ans(-1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (cumsum[mid-1] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tempp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> q;
        for (int j = 0; j < n; j++)
        {
            cin >> tempp;
            candies.push_back(tempp);
        }
        sort(candies.begin(), candies.end(), cmp);

        cumsum[0] = candies[0];
        for (int j = 1; j < n; j++)
        {
            cumsum[j] += cumsum[j-1] + candies[j];
        }

        for (int j = 0; j < q; j++)
        {
            cin >> x;
            cout << bs(x) << '\n';
            int low = 0;
            int high = n;
            while (low+1 < high)
            {
                int mid = (low + high) / 2;
                if (cumsum[mid] >= x)
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if (cumsum[n-1] < x)
            {
                cout << -1 << '\n';
            }
            else
            {
                if (cumsum[low] < x)
                {
                    cout << low+2 << '\n';
                }
                else
                {
                    cout << low+1 << '\n';
                }
            }
        }
        candies.clear();
        reset_cumsum();
    }
}