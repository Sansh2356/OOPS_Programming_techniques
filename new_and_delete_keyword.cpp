#include <iostream>
#include <string>
using namespace std;
int main(){
    int*ptr=new int[4];
    ptr[1]=10;
    ptr[2]=20;
    ptr[3]=30;
    ptr[4]=40;
    cout<<"the value stored is:"<<ptr[1]<<endl;
      cout<<"the value stored is:"<<ptr[2]<<endl;
        cout<<"the value stored is:"<<ptr[3]<<endl;
          cout<<"the value stored is:"<<ptr[4]<<endl;




          int*ap=new int(34);
cout<<"the value stored is: "<<(* ap)<<endl;
}

