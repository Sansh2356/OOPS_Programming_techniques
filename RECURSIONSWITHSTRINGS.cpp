#include <iostream>
using namespace std;
#include <string>
string print(string &name, int i, int j)
{
    // base case//
    if (i > j)
    {
        return name;
    }
    // solve one case all other will be solved automatically//
    swap(name[i], name[j]);
    // processing//
    i++;
    j--;
    print(name, i, j);
    return name;
}
int main()
{
    string name;
    cin >> name;
    string f;
    f=print(name, 0, name.length() - 1);
    cout<<f<<endl;
    
}