#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional> // for greater<>()

using namespace std;

int solve()
{
    string s;
    cin >> s;
    bool all = false;
    int sz(s.size()),cnt(0);
    if (s[0] == 'B' || s[sz-1] == 'B') all = true;
    for (int i = 1; i < sz; i++)
    {
        if (s[i] == s[i-1] && s[i] == 'B')
        {
            all = true;
            break;
        }
    }
    if (all)
    {
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
            }
        }
        return cnt;
    }

    vector<int> A;
    int curr(0);
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'A')
        {
            curr++;
        }
        else
        {
            if (curr != 0)
            {
                A.push_back(curr);
                curr = 0;
            }
        }
    }
    A.push_back(curr);
    if (A.empty())
    {
        return 0;
    }
    else
    {
        sort(A.begin(),A.end(),greater<int>());
        int num_A(A.size());
        for (int i = 0; i < num_A-1; i++)
        {
            cnt += A[i];
        }
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