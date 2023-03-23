#include <iostream>
#include <string>
using namespace std;
class one{
  private:
  int data1;
  public:
  int data2;
  void get_data2();
  int set_data1();
  int get_data1();  
};
void::one get_data2(){
int data2=45;

}
int::one set_data1(int f){
data1=f;
f=69;
}
int::one get_data1(){
    return data1;
}
class two:public one{
private:
int data3;
public:
int get_data3();
int set_data3(int m);

};
int::two set_data3(int m){
  m=data3;
  data3=76;

}
int::two get_data3(){
    return data3;
}
int main(){
two to;
cout<<"the value of data 2 is equal to"<<to.get_data2()<<endl;
cout<<"the vlaue of data 1 is equal to"<<to.get_data1()<<endl;


}