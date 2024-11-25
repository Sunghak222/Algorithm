#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];
int b[100001];
int c[100001];

void reset_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
    }
}
int solve()
{
    int n,max_a(0),max_b(0),max_c(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_a)
        {
            max_a = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > max_b)
        {
            max_b = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] > max_c)
        {
            max_c = c[i];
        }
    }
    int choose[3][2] = {0}; // [a][0] = 친구수, [a][1] = index
    int temp(0),curr(0);
    for (int i = 0; i < 3; i++) // 일단 처음 3일의 최댓값 구하기
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (i == j || i == k || j == k)
                {
                    continue;
                }
                curr = a[i] + b[j] + c[k];
                if (curr > temp)
                {
                    temp = curr;
                    choose[0][0] = a[i];
                    choose[0][1] = i;
                    choose[1][0] = b[j];
                    choose[1][1] = j;
                    choose[2][0] = c[k];
                    choose[2][1] = k;
                }
            }
        }
    }
    int diff1(0),diff2(0),diff3(0);
    for (int i = 3; i < n; i++)
    {
        diff1 = a[i] - choose[0][0];
        diff2 = b[i] - choose[1][0];
        diff3 = c[i] - choose[2][0];
        if (diff1 > 0 && diff1 > diff2 && diff1 > diff3) //diff1이 제일 크다면
        {
            choose[0][0] = a[i];
            choose[0][1] = i;
        }
        else if (diff2 > 0 && diff2 > diff1 && diff2 > diff3)
        {
            choose[1][0] = b[i];
            choose[1][1] = i;
        }
        else if (diff3 > 0 && diff3 > diff1 && diff3 > diff2)
        {
            choose[2][0] = c[i];
            choose[2][1] = i;
        }
    }
    cout << "a:" << choose[0][0] << ' ' << choose[1][0] << ' ' << choose[2][0] << '\n';
    reset_array(n);
    return choose[0][0] + choose[1][0] + choose[2][0];
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