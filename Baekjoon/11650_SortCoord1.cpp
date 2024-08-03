#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<int> tempV;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        tempV.push_back(temp);
        cin >> temp;
        tempV.push_back(temp);
        v.push_back(tempV);
        tempV.clear();
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}