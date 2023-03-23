#include <iostream>
#include <string>
using namespace std;

class mother{
private:
string name;
string fav_icecream;
public:
mother(string x, string y){
    name=x;
    fav_icecream=y;
}
void print1(){
    cout<<name<<"  "<<fav_icecream<<endl;
}


};
class daughter:public mother{
    private:
    int age;
    string name2;
    public:
    daughter(string t,string n ,int m,string f):mother(t,n)
    {
        age=m;
        name2=f;
    }
    void print2(){
        cout<<age<<"  "<<name2<<endl;
    }
};
int main(){
daughter daughterobj("ansh","nanu",4,"jsdk");
daughterobj.print1();
daughterobj.print2();



 
}
// class a{
//     public:
//     a(){
//         cout<<"hello world"<<endl;
//     }
// };
// class b:public a{
//     public:
//     b(){
//         cout<<"bye world"<<endl;//it contains both the constructors of itself as well as of the base clas
        
//     }
// };
// int main(){
//     b bo;
    

// }