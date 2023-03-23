#include <iostream>//1,2,3,4,5,6,7//key hai 7
#include <string>
using namespace std;
int print(int name[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start<=end){
    if(name[mid]==key){
        ans=mid;
end=mid-1;


    }
    if(name[mid]<key){
        start=mid+1;
    }
    else{end=mid-1;}
    mid=start+(end-start)/2;
   
 
}

return ans;

}

int main(){
    int index;
int array[7]{1,2,3,3,5,6,7};
index=print(array,7,3);
cout<<index<<endl;
}
//NOW WE NEED TO FIND THE LEFT-MOST VLAUE OF 3//
//{1,2,3,3,5,6,7}
//{1,2,3}2