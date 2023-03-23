#include <iostream>
#include <string>
using namespace std;
int print(int name[], int size,int key)
{
    // int count=0;
    int count[10]{0};
    int nums[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int x = 0; x <= 9; x++)
    {
        for (int i = 0; i < size; i++)
        {

            if (nums[x] == name[i])
            {
                count[x]++;
            }
        }
    }
    return count[key];
    
}
int main()
{
    int array[7]{1,2,3,3,3,3,5 };
    int key;
cin >> key;
int ans;
    ans=print(array,7,key);
cout<<ans<<endl;
}