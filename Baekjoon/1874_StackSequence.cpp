#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void solve(vector<int> input, int n)
{
    int idx(0),top,cnt(0);
    stack<int> seq;
    vector<char> result;
    for (int i = 1; i <= n; i++) // 4 3 6 8 7 5 2 1
    {
        seq.push(i);
        result.push_back('+');
        top = seq.top();
    
        if (top == input[idx])
        {
            while (true)
            {
                if (seq.empty() || seq.top() != input[idx])
                {
                    break;
                }
                seq.pop();
                result.push_back('-');
                cnt++;
                idx++;
            }
        }
    }
    if (cnt != n)
    {
        cout << "NO";
        return;
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << '\n';
    }
}
int main()
{
    int n,temp,idx(0);
    vector<int> input;
    stack<int> seq;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }
    solve(input, n);
}