#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c,d;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int cnt(0);
        cin >> a >> b >> c >> d;
        if (a < b)
            cnt++;
        if (a < c)
            cnt++;
        if (a < d)
            cnt++;
        cout << cnt << endl;
    }
}