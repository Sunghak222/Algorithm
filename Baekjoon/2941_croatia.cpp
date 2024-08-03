#include <iostream>
#include <string>

using namespace std;

int main()
{
    string croatia[8] = {"c=","c-","dz=","z=","s=","nj","lj","d-"};
    string ss;
    int cnt = 0;
    getline(cin,ss);

    for (int i = 0; i < 8; i++)
    {
        while (ss.find(croatia[i]) != std::string::npos)
        {
            ss.replace(ss.find(croatia[i]),croatia[i].length(),"*");
        }
    }
    cout << ss.length();
}