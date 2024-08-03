#include <iostream>
#include <vector>

using namespace std;

bool isDistinct(vector<int> a, int i)
{
    int temp;
    for (i; i < a.size(); i++)
    {
        temp = a[i];
        for (int j = i+1; j < a.size(); j++)
        {
            if (temp == a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
void solve()
{
    int n, temp;
    vector<int> input;
    vector<int> cnt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        if (isDistinct(input,i))
        {
            cout << i << endl;
            return;
        }
    }
    //1 2 1 7 1 2 1
}
int main()
{
    int t;
    cin >> t;
    vector<int> input;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}