#include <iostream>
#include <string>
using namespace std;

int sum(int name[], int size)
{
    // base case//
    if (size == 1)
    {
        return name[0];
    }
    if (size == 0)
    {
        return 0;
    }
    // processing//
    int smallproblem = name[0] + sum((name + 1), size - 1);
    return smallproblem;
}
int main()
{
    int array[6]{2, 4, 6, 8, 7, 5};
    sum(array, 6);
    cout << sum(array, 6) << endl;
}