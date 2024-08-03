#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int n;
    cin >> n;
    pair<int, string> temp;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }
    stable_sort(v.begin(),v.end(),compare);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}