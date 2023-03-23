#include <iostream>
#include <string>
using namespace std;
int main(){
    // int*xp=new int(40);
    // cout<<"the value of integer stored at the address is"<<(*xp)<<endl;
int*arr=new int[3];
arr[0]=10;
arr[1]=20;//int array'sname[numofelements]
arr[2]=30;
cout<<"the value of integer stored at the adress is:"<<arr[0]<<endl;
cout<<"the value of integer stored at the adress is:"<<arr[1]<<endl;
cout<<"the value of integer stored at the adress is:"<<arr[2]<<endl;
//shop*arr=new shop[2],dynamically allot 2 memory slots for objects of a given class,
//int*arr=new arr[2],dynamically allot 2 memory slots for integers of a array;
//float*arr=new float[2],dynamically allot 2 memory slots for float of a array


}