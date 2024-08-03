#include <iostream>

using namespace std;

int main()
{
    int A,B,V,days(0);
    cin >> A >> B >> V;
    int diff = A-B;
    cout << (V-A)/diff;
}