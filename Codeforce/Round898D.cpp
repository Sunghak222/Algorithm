#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int n,k;
    cin >> n >> k;
    string input;
    cin >> input;
    int ret(0);
    for (int i = 0; i < n; i++)
    {
        if (i >= n)
        {
            break;
        }
        if (input[i] == 'B')
        {
            ret++;
            i += k - 1;
        }
    }
    return ret;
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