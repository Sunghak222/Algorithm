#include <iostream>

using namespace std;

int n,div_num;
int divisors[150001];
int input[150001];

void reset_arrays()
{
    for (int i = 0; i < n; i++)
    {
        input[i] = 0;
    }
    for (int i = 0; i < div_num; i++)
    {
        divisors[i] = 0;
    }
    div_num = 0;
}
void get_divisors()
{
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors[div_num++] = i;
            divisors[div_num++] = n/i;
            //cout << i << ' ' << n/i << ' ';
        }
    }
    //cout << '\n';
}
long long get_diff(int div)
{
    long long truck(0);
    long long maxx(0),minn(0);
    for (int i = 0; i < n; i++)
    {
        truck += input[i];
        if ((i+1) % div == 0)
        {
            if (minn == 0)
            {
                minn = truck;
            }
            if (truck > maxx)
            {
                maxx = truck;
            }
            if (truck < minn)
            {
                minn = truck;
            }
            truck = 0;
        }
    }
    return maxx-minn;
}
long long solve()
{
    cin >> n;
    //cout << "divisors: ";
    get_divisors();
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    long long temp,ans(0);
    for (int i = 0; i < div_num; i++)
    {
        temp = get_diff(divisors[i]);
        if (temp > ans)
        {
            ans = temp;
        }
    }
    reset_arrays();
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