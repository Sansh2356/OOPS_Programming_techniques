#include <iostream>
using namespace std;
int main()
{
    int x;
    do
    {
       
        cout << "The menu has following options select one of them-:" << endl;
        cout << "1)"
             << " "
             << "Find area of circle" << endl;
        cout << "2)"
             << " "
             << "Find area of square" << endl;
        cout << "3)"
             << " "
             << "Find area of sphere" << endl;
        cout << "-1)"
             << " "
             << "exit" << endl;
        cout << "Enter a number to the corresponding option numbers of menu provided" << endl;
        int x;
        cin >> x;
        if (x == 1)
        {
            cout<<"Enter radius"<<endl;
            float radius;
            cin >> radius;
            float pi = 3.14;
            float area = pi * radius * radius;
            cout << "The radius of the following cicle is:" << area << endl;
        }
        if (x == 2)
        {
             cout<<"Enter side"<<endl;
            float side;
            cin >> side;
            float area = side * side;
            cout << "The area of the following square is:" << area << endl;
        }
        if (x == 3)
        {
             cout<<"Enter radius"<<endl;
            float radius;
            cin >> radius;
            float pi = 3.14;
            float area = 4 * pi * radius * radius;
            cout << "The radius of the following sphere is:" << area << endl;
        }
        if(x==-1){
            break;
        }
    } while (x != (-1));
}
/*
using case the above programme could have also been implemented 
switch(variable x){
    case 1:{
        do pary
    }
}

*/