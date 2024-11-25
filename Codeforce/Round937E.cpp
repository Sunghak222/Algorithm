#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int n;
string s;
int num_of_div;
int divisors[200];

void FindDivisors(int n)
{
    for (int i = 1; i*i <= n; i++)
    {
        if (i*i==n)
        {
            divisors[num_of_div++] = i;
        }
        else if (n%i == 0)
        {
            divisors[num_of_div++] = i;
            divisors[num_of_div++] = n/i;
        }
    }
}

void solve()
{
    cin >> n >> s;
    FindDivisors(n);
    sort(divisors,divisors+num_of_div);

    for (int i = 0; i < num_of_div; i++)
    {
        int curr = divisors[i];
        for (int k = 0; k < 2; k++)
        {
            int diff(0);
            int subidx = 0;
            string sub = s.substr(k*curr,(k+1)*curr);
            for (int j = 0; j < n; j++)
            {
                if (diff > 1) break;
                if (s[j] != sub[subidx])
                {
                    diff++;
                }
                subidx = (subidx < curr-1) ? subidx+1 : 0;
            }
            if (diff <= 1)
            {
                cout << curr << '\n';
                return;
            }
        }
    }
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
        num_of_div = 0;
    }
}