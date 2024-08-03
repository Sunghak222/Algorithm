#include <iostream>

using namespace std;

int main()
{
    int t,h,w,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        int anw(101),curr_H(1);
        for (int j = 1; j < n; j++)
        {
            if (curr_H >= h)
            {
                anw += 1;
                anw -= ((curr_H-1)*100);
                curr_H = 0;
            }
            else
            {
                anw += 100;
            }
            curr_H++;
        }
        cout << anw << endl;
    }
}