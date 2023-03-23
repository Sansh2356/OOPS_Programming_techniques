#include <iostream>
#include <string>
using namespace std;
class base
{

public:
   virtual  void print()//virtual functions have lesser priority as compared to ordinary functions
   //while pointing towards the respective classes through pointers.
    {
        cout << "hello world" << endl;
    }
};
class derived : public base
{

public:
    void print()
    {
        int triple;
        cout << "bye world" << endl;
    }
};
int main()
{
    base base_obj;
    derived derived_obj;
    base*bptr;
    derived*dptr;
    bptr=&derived_obj;
    bptr->print();
}