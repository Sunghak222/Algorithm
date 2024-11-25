#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int n;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
bool visited[2][200001];
string arr[2];

void bfs(int a, int b)
{
    queue<pair<int,int>> q;
    visited[a][b] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        rep(i,0,3)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx <= 1 && ny >= 0 && ny < n && !visited[nx][ny] && arr[nx][ny] == '.')
            {
                visited[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
}
void solve()
{
    cin >> n;
    cin >> arr[0] >> arr[1];
    rep(i,0,1)
    {
        rep(j,0,n-1)
        {
            if (arr[i][j] == '.')
            {
                bfs(i,j);
            }
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