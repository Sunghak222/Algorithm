#include <iostream>
#include <string>

using namespace std;

int grid[101][101];
bool visited[101][101];

void reinitiate(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = 0;
            visited[i][j] = 0;
        }
    }   
}
int solve()
{
    int n,ans(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = temp[j]-'0';
        }
    }
    if (n%2)
    {
        visited[n/2][n/2] = true;
    }
    else
    {
        visited[(n/2)-1][(n/2)-1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j])
            {
                continue;
            }
            visited[i][j] = true;
            int curr_row = i;
            int curr_col = j;
            int cnt(0);
            if (grid[curr_row][curr_col])
            {
                cnt++;
            }
            for (int k = 0; k < 3; k++)
            {
                int temp = curr_row;
                curr_row = curr_col;
                curr_col = n-temp-1;
                visited[curr_row][curr_col] = true;
                if (grid[curr_row][curr_col])
                {
                    cnt++;
                }
            }
            if (cnt == 1 || cnt == 3)
            {
                ans += 1;
            }
            else if (cnt == 2)
            {
                ans += 2;
            }
        }
    }
    reinitiate(n);
    return ans;
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