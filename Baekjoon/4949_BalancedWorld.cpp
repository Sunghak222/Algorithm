#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

bool Check(string c)
{
    stack<char> st;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == '(')
        {
            st.push('(');
        }
        else if (c[i] == '[')
        {
            st.push('[');
        }
        else if (c[i] == ')')
        {
            if (st.empty() != 1 && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
        else if (c[i] == ']')
        {
            if (st.empty() != 1 && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
    }
    if (!st.empty())
    {
        return 0;
    }
    return 1;
}
int main()
{
    string input;
    int i = 0;
    while (true)
    {
        getline(cin,input);
        if (input[0] == '.' && input.size() == 1)
        {
            break;
        }
        if (Check(input))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        input.clear();
    }
}