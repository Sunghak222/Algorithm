#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(3);
    a.push_back(3);
    a.push_back(3);
    a.push_back(3);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i];
    }
}