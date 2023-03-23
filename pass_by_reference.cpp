#include <iostream>
#include <string>
using namespace std;
// // void pass_by_value(int x,int y){
// //     x=x+1;
// //     y=y+6;
// //     cout<<"the value of x obtained is:"<<x<<endl;
// //     cout<<"the value of y obtaine is:"<<y<<endl;

// // }
// // int main(){
// //     int x=45;
// //     int y=67;

// //     pass_by_value(x,y);
// //     cout<<x<<"  "<<y<<endl;


// }
void pass_by_reference(int*x,int*y){
*x=*x+1;
*y=*y+6;
cout<<"the value of x obtaine is:"<<*x<<endl;
cout<<"the value of y obtained is:"<<*y<<endl;
}
int main(){
int x=45;
int y=67;
pass_by_reference(&x,&y);
cout<<x<<"  "<<y<<endl;
}