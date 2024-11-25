#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve()
{
    int n;
    int temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int curr = v[0];
    for (int i = 1; i < n; i++)
    {
        curr += 1;
        int k;
        if (curr % v[i] != 0)
        {
            k = curr / v[i] + 1;
        }
        else
        {
            k = curr / v[i];
        }
        curr = v[i] * k;
    }
    return curr;
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