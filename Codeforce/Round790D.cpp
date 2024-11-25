#include <iostream>
#include <vector>

using namespace std;

int t,n,m;
int board[201][201];
int cum_sum[201][201];

void get_cum_sum()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int row(i),col(j);
            while (row > -1 && row < n && col > -1 && col < m) //rightdown
            {
                cum_sum[row][col] += board[i][j];
                row++;
                col++;
            }
            row = i;
            col = j;
            while (row > -1 && row < n && col > -1 && col < m) //leftup
            {
                cum_sum[row][col] += board[i][j];
                row--;
                col--;
            }
            row = i;
            col = j;
            while (row > -1 && row < n && col > -1 && col < m) //leftdown
            {
                cum_sum[row][col] += board[i][j];
                row++;
                col--;
            }
            row = i;
            col = j;
            while (row > -1 && row < n && col > -1 && col < m) //rightup
            {
                cum_sum[row][col] += board[i][j];
                row--;
                col++;
            }
            cum_sum[i][j] -= board[i][j]*3;
        }
    }
}
void reset_cum_sum()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cum_sum[i][j] = 0;
        }
    }
}
void print_sum()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << cum_sum[i][j] << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for (int j = 0; j < n; j++) //row
        {
            for (int k = 0; k < m; k++) //column
            {
                cin >> board[j][k];
            }
        }
        get_cum_sum();
        long long ans(0);
        for (int j = 0; j < n; j++) //row
        {
            for (int k = 0; k < m; k++) //column
            {
                if (ans < cum_sum[j][k])
                {
                    ans = cum_sum[j][k];
                }
            }
        }
        //print_sum();
        cout << ans << '\n';
        reset_cum_sum();
    }
}