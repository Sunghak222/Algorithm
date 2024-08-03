#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int size(n.size());
    vector<int> num;
    for (int i = 0; i < size; i++)
    {
        num.push_back(n[i]-48);
    }
    sort(num.begin(),num.end(),greater<>());
    for (int i = 0; i < size; i++)
    {
        cout << num[i];
    }
}