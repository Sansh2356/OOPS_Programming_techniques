#include <iostream>
#include <string>
using namespace std;
bool print(int name[], int size)
{
    // base case//
    if (size == 0 || size == 1)
    {
        return true;
    }
    // solving one case//
    if (name[0] > name[1])
    {
        return false;
    }
    // recursive call//
    else
    {
        print(name + 1, size - 1);
        int ans;
        ans = print(name + 1, size - 1);
    }
    //while deciding for base case take it like a base condition in while loop till when should a loop run//
}

int main()
{
    int array[5]{2, 4, 6, 8, 7};
    print(array, 5);
    cout << print(array, 5) << endl;
}