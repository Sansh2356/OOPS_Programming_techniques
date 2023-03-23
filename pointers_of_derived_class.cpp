#include <iostream>
#include <string>
using namespace std;
class base{

    public:
    void print(){
        cout<<"hello world"<<endl;
    }
    
};
class derived:public base{

public:
void print(){
    int triple;
    cout<<"bye world"<<endl;
}

};
int main(){
base*bp;
base base_object;
derived derived_obj;
derived*dptr;
bp=&derived_obj;
bp->print();//Even though the adress stored in pointer is of derived class but as the pointer is of base
//class it will always point towards the base class hence the prefernece order while running of a 
//programme is pointer>object;
bp->triple=44;//error as the pointer is of the base class even though address stored is of derived class

}