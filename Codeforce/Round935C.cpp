#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int n,cnt;
double d = 300001;
string s;
int zeros[300004];

bool check(int mid)
{
    int numleft = mid;
    int numright = n-numleft;
    numleft = (numleft%2 == 1) ? numleft/2+1 : numleft/2;
    numright = (numright%2 == 1) ? numright/2+1 : numright/2;
    
    if (zeros[mid] >= numleft && ((n-mid)-(zeros[n]-zeros[mid])) >= numright)
    {
        return true;
    }
    return false;
}
void solve()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++) //1의개수 = i-zeros[i]
    {
        if (s[i-1] == '0')
        {
            zeros[i] = zeros[i-1]+1;
        }
        else
        {
            zeros[i] = zeros[i-1];
        }
    }
    double temp;
    for (int i = 0; i <= n; i++)
    {
        if (check(i))
        {
            temp = (double)n/2;
            temp -= i;
            if (temp < 0)
            {
                temp *= -1;
            }
            if (temp < d)
            {
                d = temp;
                cnt = i;
            }
        }
    }
    cout << cnt << '\n';
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
        d = 300001;
        cnt = 0;
    }
}