#include <iostream>
#include <set>

using namespace std;

void solve()
{
    multiset<pair<long long, long long>> maxl,minr;
    int q;
    cin >> q;
    char c;
    int l,r;
    for (int i = 0; i < q; i++)
    {
        cin >> c >> l >> r;
        if (c == '+')
        {
            minr.insert({r,l});
            maxl.insert({l,r});
        }
        else
        {
            minr.erase(minr.find({r,l}));
            maxl.erase(maxl.find({l,r}));
        }
        if (maxl.size() <= 1) //원소가 1개만 있으면 no
        {
            cout << "NO\n";
        }
        else
        {
            auto iter = minr.begin();
            auto end = maxl.end();
            end--;

            if ((*iter).first < (*end).first)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}