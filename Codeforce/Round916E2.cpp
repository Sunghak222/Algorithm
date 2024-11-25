#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[200001];
int b[200001];
vector<vector<int>> v;

void clear_arr(int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
        b[i] = 0;
        v[i].clear();
        v.clear();
    }
}
bool cmp(vector<int> &v1, vector<int> &v2)
{
    return (v1[0]+v1[1]) > (v2[0]+v2[1]);
}
long long solve()
{
    long long Alice(0),Bob(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        Alice += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        Bob += b[i];
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end(),cmp);

    bool Alice_turn(true);
    for (int i = 0; i < n; i++)
    {
        if (Alice_turn)
        {
            Alice -= 1;
            Bob -= v[i][1];
            Alice_turn = false;
        }
        else
        {
            Bob -= 1;
            Alice -= v[i][0];
            Alice_turn = true;
        }
    }
    clear_arr(n);
    return (Alice - Bob);

    /* for (int i = 0; i < n; i++)
    {
        cout << v[i][0] << ' ' << v[i][1] << '\n';
    } */
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