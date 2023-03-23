#include <iostream>
#include <string>
using namespace std;
// AMBIGUITY RESOULTION IN INHERITENCE//
// same named function in 2 or more classes leads to an ambiguity in the derieved class that needs to be resolved//
class base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho aap?" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void greet()
    {

        base1::greet(); // ambiguity has been resolved accoding to the programmer whichever defination
        // of greet he wants to use he can do so by using unary scope resolution operator.
    }
};
// AMBIGUITY 2ND TYPE//
class a
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class b : public a
{
public:
    void say()
    {
        cout << "hello chutyo" << endl;
    }
};
int main()
{
    b bo;
    a ao;
    bo.say();
    // base1 base1obj;
    // base2 base2obj;
    // derived derivedobj;
    // derivedobj.greet();
}