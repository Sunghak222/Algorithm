#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,get,ans(0),add(0);
    cin >> n;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> get;
        p.push_back(get);
    }
    sort(p.begin(),p.end());

    for (int i = 0; i < n; i++)
    {
        ans += p[i]+add;
        add += p[i];
    }
    cout << ans;    
}