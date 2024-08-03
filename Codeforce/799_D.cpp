#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int x,cnt(0),i_hour,i_min,f_hour,f_min;
        cin >> s >> x;

        i_hour = (s[0]-48)*10 + (s[1]-48);
        i_min = (s[3]-48)*10 + (s[4]-48);
        
        f_min = i_min;
        f_hour = i_hour;

        do
        {
            f_min += x;
            while (f_min > 59)
            {
                f_hour++;
                f_min -= 60;
                if (f_hour > 23)
                {
                    f_hour = 0;
                }
            }
            if (((f_hour/10)==(f_min%10)) && ((f_hour%10)==(f_min/10)))
            {
                cnt++;
            }
        }
        while ((i_hour != f_hour) || (i_min != f_min));
        cout << cnt << endl;
    }
}