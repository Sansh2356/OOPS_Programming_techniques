#include <iostream>
#include <string>
using namespace std;
template<class T>;
class vector
{

public:
    int size;
    T *arr;

    vector(int m)
    {
        size = m;           
         // 3//
        arr = new T[size];
         // array of 3 elemnts gets ready//
    }
    T dotproduct(vector &v)
    //address operator stores the address of 
    //just like int &x will store the address of an integer 
    //&v will store the address of an object//
    {
        T d = 0; // dot product variable//
        for (int x = 0; x < size; x++)
        {
            d += this->arr[x] * v.arr[x]; 
            // this pointer will allow to multiply number stored in the array//
        }
        return d;
    }
};

int main()
{
    //     int size;
    //     cin>>size;
    //    int *arr=new int[size];//new keyword used for alloting memory by the compiler//
    //    //same array that can be made otherwise//
    //    for(int x=0;x<size;x++){
    //     cin>>arr[x];
    //    }
    //    for(int x=0;x<size;x++){
    //     cout<<arr[x]<<endl;
    //    }
    // int size;
    // cin>>size;
    // int ansharray[size];
    // for(int x=0;x<size;x++){
    //     cin>>ansharray[x];
    // }
    // for(int x=0;x<size;x++){
    //     cout<<ansharray[x]<<endl;
    // }
    // refrence variable//

    vector <float>vector_obj(3);
    vector_obj.arr[0] = 4; // assigning value to variable array's element//
    vector_obj.arr[1] = 3;
    vector_obj.arr[2] = 1;
    vector <float> v2(3);
    v2.arr[0] = 1; 
    // making another object of the same class hence it will again run the constructor and
    // assign values to size make another variable array and assign value to its elements and then
    // perform dot product with the elements of the first array elements.
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    float f = vector_obj.dotproduct(v2);
    cout << f << endl;
}