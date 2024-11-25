#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

void solve() //CDHS
{
    int n;
    char trump;
    cin >> n >> trump;
    vector<int> cards[4];
    string suits = "CDHS";
    for (int i = 0; i < 2*n; i++)
    {
        string s;
        cin >> s;
        if (s[1] == 'C')
        {
            cards[0].push_back(s[0]);
        }
        else if (s[1] == 'D')
        {
            cards[1].push_back(s[0]);
        }
        else if (s[1] == 'H')
        {
            cards[2].push_back(s[0]);
        }
        else
        {
            cards[3].push_back(s[0]);
        }
    }
    
    vector<string> res,rem;
    for (int i = 0; i < 4; i++) //cdhs
    {
        sort(cards[i].begin(),cards[i].end());
        if (suits[i] == trump)
        {
            continue;
        }
        if (cards[i].size() % 2)
        {
            string temp = string() + char(cards[i].back()) + suits[i];
            rem.push_back(temp);
            cards[i].pop_back();
        }
    }
    if (cards[suits.find(trump)].size() < rem.size())
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (suits[i] == trump)
            {
                continue;
            }
            for (int j = 0; j < cards[i].size(); j++) 
            {
                cout << string() + char(cards[i][j]) + suits[i] << ' ';
                cout << string() + char(cards[i][j+1]) + suits[i] << '\n';
                j++;
            }
        }
        for (int i = 0; i < rem.size(); i++)
        {
            cout << rem[i] << ' ';
            cout << string() + char(cards[suits.find(trump)].back()) + suits[suits.find(trump)] << '\n';
            cards[suits.find(trump)].pop_back();
        }
        int x = cards[suits.find(trump)].size();
        for (int i = 0; i < x; i++)
        {
            cout << string() + char(cards[suits.find(trump)][i]) + suits[suits.find(trump)];
            cout << ' ' << string() + char(cards[suits.find(trump)][++i]) + suits[suits.find(trump)] << '\n';
        }
    }
    return;
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