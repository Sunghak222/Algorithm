#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,sum,add;
    char arr[80];
    cin >> n;
    
    for (int i = 0; i<n; i++)
    {
        sum = 0;
        add = 0;
        cin >> arr;
        for (char &s: arr)
        {
            if (s == 'O')
            {
                add++;
                sum += add;
            }
            else if (s == 'X')
            {
                add = 0;
            }
        }
        cout << sum << endl;
    }
}