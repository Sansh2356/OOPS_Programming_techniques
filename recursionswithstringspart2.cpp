#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ans=-1;
    string name;
    name="ansh sharma";
    string f="";
    for (int x = 0; x < name.length(); x++)
    {
        if (name[x] == ' ')
        {
            f.push_back('[');
            f.push_back('.');
            f.push_back(']');
            
          
           // return x;
        }
        else{f.push_back(name[x]);}
        
    }
cout<<f<<endl;


}