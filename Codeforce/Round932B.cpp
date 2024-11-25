#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; j >= k; i--)
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool check[100002] = {false};
    int mex = 0;
    rep(i,0,n-1)
    {
        cin >> v[i];
        if (!check[v[i]])
        {
            check[v[i]] = true;
        }
    }
    rep(i,0,n)//mex == 1일때?
    {
        if (!check[i])
        {
            mex = i;
            check[i] = true;
            break;
        }
    }
    if (mex == 0)
    {
        cout << "2\n" << "1 1\n2 " << n << '\n';
        return;
    }
    int idx(-1);
    int cnt(0);
    vector<bool> aaa(mex,false);
    rep(i,0,n-1)
    {
        if (v[i] < mex && !aaa[v[i]])
        {
            aaa[v[i]] = true;
            cnt++;
        }
        if (cnt == mex)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1 || idx+1 == n)
    {
        cout << -1 << '\n';
        return;
    }

    vector<bool> bbb(mex,false);
    cnt = 0;
    rep(i,idx+1,n-1)
    {
        if (v[i] < mex && !bbb[v[i]])
        {
            bbb[v[i]] = true;
            cnt++;
        }
        if (cnt == mex)
        {
            cout << 2 << '\n' << 1 << ' ' << idx+1 << '\n' << idx+2 << ' ' << n << '\n';
            return;
        }
    }
    cout << -1 << '\n';
    
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