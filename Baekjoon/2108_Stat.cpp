#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double RoundUp(double num)
{
    double decimalP = num - (int)num;
    if (num >= 0)
    {
        return (decimalP >= 0.5) ? (int)num + 1 : (int)num;
    }
    else
    {
        return (decimalP <= -0.5) ? (int)num -1 : (int)num;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n,temp,sum(0),median,mode,range;
    double mean,a;
    vector<int> v;
    vector<int> v1(8002,0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        v1[temp+4000]++;
        v.push_back(temp);
    }
    a = (double)sum/n;
    mean = RoundUp(a);
    sort(v.begin(),v.end());
    median = (n%2 == 0) ? (v[n/2-1]+v[n/2])/2 : v[n/2];
    range = v[n-1] - v[0];
    int max(0);
    
    int ssize = v.size();
    if (ssize == 1)
    {
        for (int i = 0; i < 8002; i++)
        {
            if (v1[i])
            {
                mode = i-4000;
            }
        }
    }
    else
    {
        for (int i = 0; i < 8002; i++)
        {
            if (v1[i] > max)
            {
                max = v1[i];
            }
        }
        bool is_second = 0;
        for (int i = 0; i < 8002; i++)
        {
            if (v1[i] == max)
            {
                if (!is_second)
                {
                    is_second = 1;
                    mode = i-4000;
                    continue;
                }
                else
                {
                    mode = i-4000;
                    break;
                }
            }
        }
    }
    
    cout << mean << "\n" << median << "\n" << mode << "\n" << range << "\n"; 
}