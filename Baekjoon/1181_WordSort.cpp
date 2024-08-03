#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int n;
int nn;
vector<string> v;
string temp[20001];

void merge(int left, int right)
{
    int mid = (left+right)/2;
    int i = left;
    int j = mid+1;
    int c = left;
    
    while (i<=mid && j<=right)
    {
        if (v[i].length() <= v[j].length())
        {
            temp[c++] = v[i++];
        }
        else if (v[i].length() > v[j].length())
        {
            temp[c++] = v[j++];
        }
    }
    while (i <= mid)
    {
        temp[c++] = v[i++];
    }
    while (j <= right)
    {
        temp[c++] = v[j++];
    }
    for (int k = left; k <= right; k++)
    {
        v[k] = temp[k];
    }
}

void divide(int left, int right)
{
    if (left != right)
    {
        int mid = (left+right)/2;
        divide(left,mid);
        divide(mid+1,right);
        merge(left,right);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    string temp;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    set<string>::iterator iter;
    for (iter = s.begin(); iter != s.end(); iter++)
    {
        v.push_back(*iter);
    }
    nn = v.size();
    divide(0,nn-1);
    //cout << v[0] << v[1] << v[2] << v[3];
    
    vector<string>::iterator iterr;
    iterr = v.begin();
    for (iterr = v.begin(); iterr != v.end(); iterr++)
    {
        /*
        if (*iterr == "")
        {
            continue;
        }
        */
        cout << *iterr << "\n";
    }
}