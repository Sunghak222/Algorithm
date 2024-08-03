#include <iostream>
#include <vector>

using namespace std;

int main()
{
    signed long long int n,temp;
    cin >> n;
    vector<signed long long int> length;
    vector<signed long long int> gas;
    for (int i = 0; i < n-1; i++)
    {
        cin >> temp;
        length.push_back(temp);
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> temp;
        gas.push_back(temp);
    }
    cin >> temp;

    long long int curr(gas[0]),cost(gas[0]*length[0]);
    for (int i = 0; i < gas.size()-1; i++)
    {
        if (curr < gas[i+1])
        {
            cost += curr*length[i+1];
        }
        else if (curr >= gas[i+1])
        {
            curr = gas[i+1];
            cost += curr*length[i+1];
        }
    }
    cout << cost;
}