#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,cnt,size;
    string str;

    cin >> n;
    cnt = n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        size = str.length();

        for (int j = 0; j < size; j++)
        {
            if (str[j] != str[j+1])
            {
                for (int k = j + 1; k < size; k++)
                {
                    if (str[j] == str[k])
                    {
                        cnt--;
                        goto STOPCNT;
                    }
                }
            }
        }
        STOPCNT:;
    }
    cout << cnt;
}