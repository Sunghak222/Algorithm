#include <iostream>

using namespace std;

class Stack
{
private:
    int topidx;
    int *data = new int[10001];
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int size();
    bool empty();
    int top();
};
Stack::Stack()
{
    topidx = -1;
}
Stack::~Stack()
{
    delete[] data;
}
void Stack::push(int x)
{
    topidx++;
    data[topidx] = x;
}
int Stack::pop()
{
    if (empty())
    {
        return -1;
    }
    else
    {
        return data[topidx--];
    }
}
int Stack::size()
{
    return topidx+1;
}
bool Stack::empty()
{
    if (topidx == -1)
    {
        return 1;
    }
    return 0;
}
int Stack::top()
{
    if (empty())
    {
        return -1;
    }
    return data[topidx];
}

int main()
{
    int n;
    cin >> n;
    string command;
    int temp;
    Stack st;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        if (command == "push")
        {
            cin >> temp;
            st.push(temp);
        }
        else if (command == "pop")
        {
            cout << st.pop() << endl;
        }
        else if (command == "size")
        {
            cout << st.size() << endl;
        }
        else if (command == "empty")
        {
            cout << st.empty() << endl;
        }
        else if (command == "top")
        {
            cout << st.top() << endl;
        }
    }
}