#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h1(3),h2(2),h3(1);
        cin >> n;
        while (h2+h1+h3 < n)
        {
            if (h1-h2 == 1 && h2-h3 == 1)
                h1++;
            else if (h2-h3 == 1)
                h2++;
            else
                h3++;
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
    }
}