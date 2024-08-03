#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<vector<int>> &vec, int n)
{
    int cnt(1),index(0);
    sort(vec.begin(),vec.end());
    int f = vec[0][0];
    for (int i = 1; i < n; i++)
    {
        if (f <= vec[i][1])
        {
            cnt++;
            f = vec[i][0];
        }
    }
    cout << cnt;
}
int main()
{
    int n,start,end;
    cin >> n;
    vector<vector<int>> m;
    vector<int> m1;
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        m1.push_back(end);
        m1.push_back(start);
        m.push_back(m1);
        m1.clear();
    }
    solve(m,n);
}