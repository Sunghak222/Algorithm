#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n,temp;
    cin >> n;
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        /*
        if (find(v1.begin(),v1.end(),temp) == v1.end())
        {
            v1.push_back(temp);
        }*/
        v1.push_back(temp);
    }
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    sort(v1.begin(),v1.end());
    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(v1.begin(),v1.end(),v[i])-v1.begin() << ' ';
    }
}