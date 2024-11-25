#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_diff(int m, string s1, string s2)
{
    int diff(0);
    for (int i = 0; i < m; i++)
    {
        if (s1[i] > s2[i])
        {
            diff += s1[i] - s2[i];
        }
        else
        {
            diff += s2[i] - s1[i];
        }
    }
    return diff;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m;
    string temp;
    vector<string> input;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int ans(10000);

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            input.push_back(temp);
        }

        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int cmp = get_diff(m,input[j],input[k]);
                if (cmp < ans)
                {
                    ans = cmp;
                }
            }
        }
        input.clear();
        cout << ans << '\n';
    }
}