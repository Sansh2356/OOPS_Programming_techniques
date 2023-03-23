#include <iostream>
#include <string>
using namespace std;
//some features about binary search
//1)Binary search can only be applied on monotonic functions
int print_array(int name[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){

        if(name[mid]==key){
            return mid;
        }
        if(name[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
        
       
    }
    return -1;
}
int main(){
    int array[7]{1,2,3,4,5,6,7};
    print_array(array,7,5);
    cout<<print_array(array,7,22)<<endl;
   
    
}