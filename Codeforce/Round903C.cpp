#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_visited[1001][1001];

int solve()
{
    int n,cnt(0);
    cin >> n;
    char ch;
    vector<char> tmp;
    vector<vector<char>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ch;
            tmp.push_back(ch);
        }
        v.push_back(tmp);
        tmp.clear();
    }
    
    char alp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (is_visited[i][j]) continue;
            
            int x = i;
            int y = j;
            int temp;
            is_visited[x][y] = 1;
            alp = v[x][y];
            for (int k = 0; k < 3; k++)
            {
                temp = x;
                x = y;
                y = n - temp - 1;
                is_visited[x][y] = 1;
                if (alp > v[x][y])
                {
                    cnt += (alp - v[x][y]);
                    //cout << x << ' ' << y << '\n';
                }
                else if (alp < v[x][y])
                {
                    cnt += (v[x][y] - alp) * (k+1);
                    alp = v[x][y];
                    //cout << x << ' ' << y << '\n';
                }
            }
        }
    }
    return cnt;
}
void reset_arr()
{
    for (int i = 0; i < 1001; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            is_visited[i][j] = 0;
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
        cout << solve() << '\n';
        reset_arr();
    }
}