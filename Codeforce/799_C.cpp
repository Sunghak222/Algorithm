#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int s[8][8];
        for (int j = 0; j < 8; j++)
        {
            int cnt(0);
            for (int k = 0; k < 8; k++)
            {
                char temp;
                cin >> temp;
                s[j][k] = (int)temp;
            }
        }
        int j(0),k(0),x(0),y(0);
        for (j; j < 8; j++)
        {
            int cnt(0);
            for (k; k < 8; k++)
            {
                if (s[j][k] == 35)
                {
                    cnt++;
                    x = k+1;
                    y = j+1;
                }
            }
            if (cnt == 1 && s[y-2][x-2] == 35 && s[y-2][x] == 35 && s[y][x-2] == 35 && s[y][x] == 35)
            {
                cout << y << " " << x << endl;
                break;
            }
            k = 0;
        }
    }
}