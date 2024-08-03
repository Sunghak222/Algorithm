#include <iostream>

using namespace std;

void draw(int a)
{
    if (a == 1)
    {
        return;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i >= a/3 && i <= a/3*2 && j >= a/3 && j <= a/3*2)
            {
                cout << " ";

            }
            else
            {
                draw(a/3);
            }
        }
        cout << endl;
    }
    
}
int main()
{
    int n;
    cin >> n;
    draw(n);
}