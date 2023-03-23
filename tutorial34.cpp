#include<iostream>
#include<string>
using namespace std;
class ansh{
    private:
    int x;
    public:
    ansh(){
        x=0;

    }
    ansh(int a){
        x=a;
    }
    ansh(ansh &obj){
        cout<<"the copy constructor is called"<<endl;
        x=obj.x;

    }
    void print(){cout<<"the value of x is"<<"-----"<<x<<endl;}
};
int main(){
  //  ansh ao;//as the object declared here has no argument it will automatically refer to the constructor having no argument
    //ao.print();
   // ansh ao(5);//here the object has an argument hence it will always refer to the constructor having an argument
    //ao.print();
    ansh l(5),m;
    l.print();
    m.print();
    ansh f(m);
    f.print();
}