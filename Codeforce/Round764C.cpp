#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> v, int n)
{
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
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