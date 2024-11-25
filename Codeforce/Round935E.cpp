#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    int arr[200001];
    int target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            target = i;
        }
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