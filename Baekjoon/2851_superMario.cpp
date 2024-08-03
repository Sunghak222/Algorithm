#include <iostream>
#include <cstdlib>

using namespace std;

int solve()
{
    int arr[10],sum(0);
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (abs(100-sum)>abs(100-arr[i]-sum))
        {
            sum += arr[i];
        }
        else if (abs(100-sum) == abs(100-arr[i]-sum))
        {
            sum += arr[i];
            return sum;
        }
        else
        {
            break;
        }
    }
    return sum;
}
int main()
{
    cout << solve();
}