#include <iostream>

using namespace std;

class Stack
{
private:
    string data;
public:
    Stack();
    void push(string s);
    int size();
    char at(int idx);
};
Stack::Stack()
{

}
void Stack::push(string s)
{
    data = s;
}
int Stack::size()
{
    return data.length();
}
char Stack::at(int idx)
{
    return data[idx];
}
int main()
{
    int t;
    bool Yes(1);
    string s;
    cin >> t;
    Stack st;
    for (int i = 0; i < t; i++)
    {
        int cnt(0);
        cin >> s;
        st.push(s);

        for (int j = 0; j < st.size(); j++)
        {
            if (st.at(j) == '(')
            {
                cnt++;
            }
            else if (cnt == 0 && st.at(j) == ')')
            {
                Yes = 0;
                break;
            }
            else
            {
                cnt--;
            }
        }
        if (cnt != 0)
        {
            Yes = 0;
        }
        if (Yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        Yes = 1;
    }
}
