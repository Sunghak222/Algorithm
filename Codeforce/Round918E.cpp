#include <iostream>
#include <map>

using namespace std;

int n;
long long arr[200001];

bool solve()
{
    int n,temp;
    cin >> n;
    if (n == 1)
    {
        cin >> temp;
        return false;
    }
    cin >> temp;
    arr[0] = temp;
    cin >> temp;
    arr[1] = temp;
    for (int i = 2; i < n; i++)
    {
        cin >> temp;
        arr[i] = arr[i-2] + temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            long long odd,even;
            if ((j-i)%2)
            {   
                odd = (i > 0) ? arr[j] - arr[i-1] : arr[j];
                even = (i > 1) ? arr[j-1] - arr[i-2] : arr[j-1];
            }
            else
            {
                odd = (i > 1) ? arr[j] - arr[i-2] : arr[j];
                even = (i > 0) ? arr[j-1] - arr[i-1] : arr[j-1];
            }

            if (odd == even)
            {
                //cout << odd << ' ' << even;
                return true;
            }
        }
    }
    return false;
}

void correct_answer()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> mp;
    mp[0] = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] *= (i % 2) ? -1 : 1;
        sum += arr[i];
        if (mp[sum])
        {
            cout << "YES\n";
            return;
        }
        mp[sum]++;
    }
    cout << "NO\n";
    return;
}
void refill()
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
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
        correct_answer();
        refill();
    }
}