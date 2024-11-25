#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[n];
    map<string, bool> mp; //특정 string이 있나 없나.
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        int size = s[i].size();
        bool ok = false;
        for (int j = 1; j < size; j++)
        {
            string s1,s2;
            s1 = s[i].substr(0,j);
            s2 = s[i].substr(j);
            if (mp[s1] && mp[s2])
            {
                ok = true;
            }
        }
        cout << ok;
    }
    cout << '\n';
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