#include <iostream>

using namespace std;

class Stack
{
private:
    int topidx;
    int *data = new int[100000];
public:
    Stack();
    ~Stack();
    void push(int x);
    void pop();
    int size();
    bool empty();
    int top();
    int get_sum();
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
void Stack::pop()
{
    if (empty())
    {
        //cout << "The stack is already empty.\n";
        return;
    }
    else
    {
        topidx--;
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
int Stack::get_sum()
{
    int sum(0);
    if (empty())
    {
        //cout << "The stack is already empty.\n";
        return 0;
    }
    else
    {
        for (int i = 0; i <= topidx; i++)
        {
            sum += data[i];
        }
    }
    return sum;
}

int main()
{
    int k,temp;
    cin >> k;

    Stack st;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            st.pop();
        }
        else
        {
            st.push(temp);
        }
    }
    cout << st.get_sum();
}