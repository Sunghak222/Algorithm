#include <iostream>
#include <map>

using namespace std;

void get_divisors(int num, map<int, int> &mp)
{
    for (int i = 2; i*i <= num; i++)
    {
        while (num % i == 0)
        {
            mp[i]++;
            num /= i;
        }
    }
    if (num > 1) mp[num]++;
}
bool solve()
{
    int n,temp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        get_divisors(temp,mp);
    }
    for (auto ele : mp)
    {
        if (ele.second % n != 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
}