#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t,n,mnum;
    char temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> ans;
        vector<char> num;
        string moves;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            num.push_back(temp);
        }
        for (int j = 0; j < n; j++) //moves
        {
            int move(0);
            cin >> mnum;
            cin >> moves;
            for (int k = 0; k < mnum; k++)
            {
                if (moves[k] == 'U')
                {
                    move--;
                }
                else if (moves[k] == 'D')
                {
                    move++;
                }
            }
            ans.push_back((num[j]-'0') + move);
            if (ans[j] > 9)
            {
                ans[j] -= 10;
            }
            else if (ans[j] < 0)
            {
                ans[j] += 10;
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << ans[j] << " ";
        }
        cout << endl;
    }
}