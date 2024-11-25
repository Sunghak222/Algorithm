#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void solve()
{
    int n,m;
    string s;
    stack<int> st;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> s;
    int ll(0),rr(n-1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            st.push(v[ll]);
            ll++;
        }
        else
        {
            st.push(v[rr]);
            rr--;
        }
    }
    int mul(1),idx(0);

    while (!st.empty())
    {
        mul = (mul % m) * (st.top() % m) % m;
        v1[idx++] = mul % m;
        st.pop();
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << v1[i] << ' ';
    }
    cout << '\n';
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