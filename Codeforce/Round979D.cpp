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


void solve()
{
    int n,q;
    cin >> n >> q;
    int arr[200001];
    bool pref[200001] = {false};

    cin >> arr[0];
    if (arr[0] == 1) pref[0] = true;
    for (int i = 1; i < n; i++) 
    {
        cin >> arr[i];
        if (arr[i] <= i+1 && pref[i-1]) pref[i] = true;
    }

    string s;
    cin >> s;
    int cnt(0);
    bool check[200001] = {false}; //L기준
    for (int i = 0; i < n-1; i++) 
    {
        if (s[i] == 'L' && s[i+1] == 'R' && !pref[i])
        {
            check[i] = true;
            cnt++;
        }
    }
    
    int num;
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        if (check[num-1])
        {
            check[num-1] = false;
            if (s[num-1] == 'L' && num-2 >= 0 && s[num-2] == 'L')
            {
                if (ch(num-2)) check[num-2] = true;
            }
        }
        if ((num+1<n && check[num]))
    }
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