#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
// int print(int name[], int size)
// {
//     // rounds will run and will be compared pair wise till round n-1//
//     for (int x = 0; x < size; x++)
//     {

//         for (int f = 0; f < size - 1; f++)
//         {

//             if (name[f] > name[f + 1])
//             {
//                 swap(name[f], name[f + 1]);
//             }
//         }
//     }
//     for (int j = 0; j < size; j++)
//     {
//         cout << name[j] << endl;
//     }
// }
// int main()
// {
//     int array[9]{1, 4, 1,4 , 5,67,0,63,0};
//     print(array, 9);
// }
int main(){
    int array[5]{0,1,2,1,2};
    sort(array,array[4]);
    for(int x=0;x<5;x++){
        cout<<array[x]<<endl;
    }
}