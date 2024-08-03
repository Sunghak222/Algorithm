#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> v;
int temp[100001][2] = {0};
void merge(int left, int right)
{
    int mid = (left+right)/2;
    int i = left;
    int j = mid+1;
    int c = left;
    while (i<=mid && j<=right)
    {
        if (v[i][0] < v[j][0])
        {
            temp[c][0] = v[i][0];
            temp[c++][1] = v[i++][1];
        }
        else if (v[i][0] > v[j][0])
        {
            temp[c][0] = v[j][0];
            temp[c++][1] = v[j++][1];
        }
        else if (v[i][0] == v[j][0])
        {
            if (v[i][1] < v[j][1])
            {
                temp[c][0] = v[i][0];
                temp[c++][1] = v[i++][1];
            }
            else if (v[i][1] > v[j][1])
            {
                temp[c][0] = v[j][0];
                temp[c++][1] = v[j++][1];
            }
        }
    }
    while (i <= mid)
    {
        temp[c][0] = v[i][0];
        temp[c++][1] = v[i++][1];
    }
    while (j <= right)
    {
        temp[c][0] = v[j][0];
        temp[c++][1] = v[j++][1];
    }
    for (int k = left; k <= right; k++)
    {
        v[k][0] = temp[k][0];
        v[k][1] = temp[k][1];
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
    vector<int> tempV;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        tempV.push_back(temp);
        cin >> temp;
        tempV.push_back(temp);
        v.push_back(tempV);
        tempV.clear();
    }
    divide(0,n-1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}