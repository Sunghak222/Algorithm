#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,anw(0),curr;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    curr = s[n-1];
    anw++;
    for (int i = n-2; i >= 0; i--)
    {
        if (s[i] > curr)
        {
            anw++;
            curr = s[i];
        }
    }
    cout << anw;
}