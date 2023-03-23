#include <iostream>
#include <string>
using namespace std;
void fake(){
    
}
bool print(int name[], int s, int e, int key)
{
    fake()
    int mid = s + (e - s) / 2;
    // base case//
    if (s > e)
    {
        return false;
    }
    if (name[mid] == key)
    {
        return true;
    }
    if (name[mid] < key)
    {
        int ans;
        ans = print(name, mid + 1, e, key);
        return ans;
    }
    if (name[mid] > key)
    {
        int ans;
        ans = print(name, s, mid - 1, key);
        return ans;
    }
}
int main()
{
    int array[5]{1, 2, 3, 4, 5};
    int key;
    cin >> key;
    cout << print(array, 0, 4, key) << endl;
}