#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

int n;
int arr[200001][2];

void solve()
{
    cin >> n;
    int minus(0),plus(0);
    int curra(0),currb(0);
    rep(i,0,n-1)
    {
        cin >> arr[i][0];
    }
    rep(i,0,n-1)
    {
        cin >> arr[i][1];
    }
    rep(i,0,n-1)
    {
        if (arr[i][0] > arr[i][1]) curra+=arr[i][0];
        else if (arr[i][0] < arr[i][1]) currb+=arr[i][1];
        else if (arr[i][0] == arr[i][1])
        {
            if (arr[i][0] == -1) minus++;
            else if (arr[i][0] == 1) plus++;
        }
    }
    
    bool a_greater = (curra>=currb) ? true : false;
    int d = (curra>=currb) ? curra-currb : currb-curra;
    if (minus <= d)
    {
        if (a_greater)
        {
            curra -= minus;
        }
        else
        {
            currb -= minus;
        }
        minus = 0;
    }
    else
    {
        minus -= d;
        if (a_greater)
        {
            curra = currb;
        }
        else
        {
            currb = curra;
        }
        curra -= (minus%2) ? (minus+1)/2 : minus/2;
        currb -= minus/2;
    }

    a_greater = (curra>=currb) ? true : false;
    d = (curra>=currb) ? curra-currb : currb-curra;
    if (plus <= d)
    {
        if (a_greater)
        {
            currb += plus;
        }
        else
        {
            curra += plus;
        }
        plus = 0;
    }
    else
    {
        plus -= d;
        if (a_greater)
        {
            currb = curra;
        }
        else
        {
            curra = currb;
        }
        curra += plus/2;
        currb += plus/2;
    }
    cout << min(curra,currb) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}