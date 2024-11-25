#include <iostream>
#include <vector>

using namespace std;

vector<int> input;

void solve()
{
    int n,temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    } 
    
    int min_idx(0);
    for (int i = 0; i < n; i++)
    {
        if (input[i] < input[min_idx])
        {
            min_idx = i;
        }
    }
    for (int i = min_idx + 1; i < n; i++)
    {
        if (input[i] < input[i-1])
        {
            cout << "-1\n";
            return;
        }
    }
    cout << min_idx << '\n';
    return;
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
        input.clear();
    }
}