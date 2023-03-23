#include <iostream>
#include <string>
using namespace std;
int print(int name[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = i;
        for (int j = (i - 1); i <= 0; j--)
        {
            if (name[temp] < name[j])
            {
                name[j] = name[j + 1];
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    int array[4]{1, 5, 4, 2};
}