#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,n,num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int time;
        vector<int> queue, finish;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            queue.push_back(num);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            finish.push_back(num);
        }
        cout << finish[0]-queue[0] << " ";
        for (int j = 1; j < n; j++)
        {
            if (queue[j]>=finish[j-1])
            {
                time = finish[j] - queue[j];
            }
            else
            {
                time = finish[j] - finish[j-1];
            }
            cout << time << " ";
        }
        cout << endl;
    }
}