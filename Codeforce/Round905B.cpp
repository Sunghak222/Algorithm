#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int n,k;
    string s;
    cin >> n >> k >> s;
    vector<int> alp(26,0);
    for (int i = 0; i < n; i++)
    {
        alp[s[i]-'a']++;
    }
    int num_of_odd(0);
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] % 2)
        {
            num_of_odd++;
        }
    }
    if (num_of_odd > k+1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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
    }
}