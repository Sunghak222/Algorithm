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
        ll n;
        cin >> n;
        ll arr[200003];
        cin >> arr[0];
        rep(i,1,n-1)
        {
            cin >> arr[i];
            arr[i] += arr[i-1];
        }
        string s;
        cin >> s;
        
        ll sum(0);
        ll l(0),r(n-1);
        while (l < r)
        {
            while (l < n && s[l] != 'L') l++;
            while (r >= 0 && s[r] != 'R') r--;
            
            if (l < r && s[l] == 'L' && s[r] == 'R')
            {
                sum += arr[r];
                sum -= (l == 0) ? 0 : arr[l-1];
                l++;
                r--;
            }
        }
        cout << sum << '\n';
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