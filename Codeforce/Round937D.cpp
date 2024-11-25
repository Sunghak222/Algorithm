#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int n;
int size;
int arr[31] = {10,11,110,111,100,101,1111,1110,1100,1101,1000,1011,1010,1001,11111,11110,11100,11101,11000,11001,11011,11010,10000,10001,10010,10011,10100,10101,10111};
vector<int> v;

void brute(int idx, int curr)
{
    if (curr > 100000) return;
    v.push_back(curr);
    for (int i = idx; i < 29; i++)
    {
        curr *= arr[i];
        brute(i,curr);
        curr /= arr[i];
    }
}
void solve()
{
    cin >> n;
    bool yes(false);
    for (int i = 0; i < size; i++)
    {
        if (n == v[i])
        {
            yes = true;
        }
    }
    if (yes) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    brute(0,1);
    size = v.size();
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}