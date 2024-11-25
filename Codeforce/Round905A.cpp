#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int cnt(0);
    string num;
    cin >> num;
    int curr = 1;
    for (int i = 0; i < 4; i++)
    {
        int target = num[i] - '0';
        if (target == 0)
        {
            if (target == curr)
            {
                cnt++;
                continue;
            }
            target = 10;
        }
        if (target == curr)
        {
            cnt++;
            continue;
        }
        else if (target > curr)
        {
            cnt += target - curr + 1;
        }
        else
        {
            cnt += curr - target + 1;
        }
        curr = target;
    }
    return cnt;
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