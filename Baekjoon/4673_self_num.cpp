#include <iostream>

using namespace std;

int self(int n)
{
    return  n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
}

int main()
{
    int n = 10000;
    int arr[n+1] = {0,};

    for (int i = 1; i<n; i++)
    {
        if (self(i) < n)
        {
            arr[self(i)] = 1;
        }
    }

    for (int i = 1; i<n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}