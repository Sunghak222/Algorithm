#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,temp1,temp2;
    vector<vector<int>> alarms;
    vector<int> box;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,H,M,min(3600),temp(0);
        cin >> n >> H >> M;
        for (int j = 0; j < n; j++)
        {
            cin >> temp1 >> temp2;
            box.push_back(temp1);
            box.push_back(temp2);
            alarms.push_back(box);
            box.clear();
        }
        for (int j = 0; j < n; j++)
        {
            if (alarms[j][1]-M < 0)
            {
                temp += alarms[j][1]-M+60;
                alarms[j][0] -= 1;
            }
            else
            {
                temp += alarms[j][1]-M;
            }
            if (alarms[j][0]-H < 0)
            {
                temp += (alarms[j][0]-H+24)*60;
            }
            else 
            {
                temp += (alarms[j][0]-H)*60;
            }
            if (min > temp)
            {
                min = temp;
            }
            temp = 0;
        }
        cout << min/60 << " " << min%60 << endl;
        alarms.clear();
    }
}