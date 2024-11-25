#include <iostream>
#include <string>

using namespace std;

int solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int alp[26] = {0};
    for (int i = 0; i < n; i++)
    {
        alp[s[i]-'a']++;
    }
    int max_num(0);
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] > max_num)
        {
            max_num = alp[i];
        }
    }
    if (max_num > (n/2)) return max_num * 2 - n;
    
    if (n % 2) return 1;
    else return 0;
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