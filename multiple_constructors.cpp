#include<iostream>
#include<string>
using namespace std;
class ansh{
    private:
    int x;
    string name;
    public:
    ansh(int f){
        x=f;
    }
    ansh(string m){
        name=m;
    }
    void nanu(){
        cout<<x<<endl;
        cout<<name<<endl;
    }
};
int main(){

}