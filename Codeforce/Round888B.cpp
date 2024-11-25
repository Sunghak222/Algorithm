#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,temp;
    cin >> n;
    int input[200001];
    int sorted[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        input[i] = temp;
        sorted[i] = temp;
    }
    sort(sorted,sorted+n);
    for (int i = 0; i < n; i++)
    {
        bool parity1,parity2;
        parity1 = (input[i] % 2);
        parity2 = (sorted[i] % 2);
        if (parity1 != parity2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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