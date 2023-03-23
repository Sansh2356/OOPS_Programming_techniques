#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int print(int &n){
    n++;
}
int main(){
//int array[5]{1,2,3,4,5};
//cout<<array+1<<endl;
  //cout<<&array[1]<<endl;
   // int*p=&array[0];
   // cout<<p<<endl;
   // p=p+1;
   // cout<<p<<endl;
   //array=array+1//not allowed as mapped values in a symbol table cannot be changed
    char ch[6]{"abcde"};
//    cout<<&ch<<endl;
//    int a[4]{1,2,3,4};
//    cout<<a<<endl;
//    char*ch1=&ch[0];
//    cout<<ch1<<endl;
   //we can pass or change the value of a variable by passing a pointer in parameter of a function but we cannot change or update
   //the value of address of the variable stored
   int arr[4]{1,2,3,4};
  // cout<<arr<<endl;
  // cout<<&arr[0]<<endl;
  // cout<<*(arr+1)<<endl;
  //cout<<*(arr)+1<<endl;
 // cout<<*(ch)+1<<endl;
//  int a=6;
//  int &j=a;
//  cout<<j<<endl;
//  cout<<a<<endl;
int a=8;
print(a);//a=&n no new memory is being made isntead the same memory is being used as reference and pointing to same address and value instead
// of making a copy and allocating a new memory.
cout<<a<<endl;
int arr=new arr[5];
   }

 

