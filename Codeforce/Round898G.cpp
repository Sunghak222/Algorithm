#include <iostream>
#include <string>

using namespace std;
//AAABABAAAABBBBBABBAABBAABAABBAAAAAAABAAA
//AABAAABA
int t;

int solve(int j)
{
    string s;
    cin >> s;
    if (j == 288)
    {
        cout << s;
    }
    int l(0),r(0),cnt(0),sz(s.size());

    bool all_correct = false;
    if (s[0] == 'B' || s[sz-1] == 'B') all_correct = true;
    for (int i = 1; i < sz; i++)
    {
        if (s[i] == s[i-1] && s[i] == 'B')
        {
            all_correct = true;
        }
    }
    if (all_correct)
    {
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
            }
        }
        return cnt;
    }
    
    bool is_left = true;
    for (auto i : s) //A로 시작하고 끝남 
    {
        if (i == 'A' && is_left)
        {
            l++;
        }
        else if (i == 'A' && !is_left)
        {
            r++;
        }
        else if (i == 'B' && !is_left) //B를 만남 
        {
            if (l >= r) //r은 항상 0이기에 B가 없는 반례는 r==0으로 찾기보단 직접찾는게 정확하다
            {
                cnt += l;
                l = r;
                r = 0;
            }
            else
            {
                cnt += r;
                l = 0;
                r = 0;
            }
        }
        else if (i == 'B' && is_left)
        {
            is_left = false;
        }
    }
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'B')
        {
            cnt += (l > r) ? l : r;
            return cnt;
        }
    }
    return 0;
    /* if (r == 0) return 0;
    cnt += (l > r) ? l : r;
    return cnt; */
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cout << solve(j) << '\n';
    }
}