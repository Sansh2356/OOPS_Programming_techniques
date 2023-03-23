#include <iostream>
#include <string>
using namespace std;
int print(int name[], int size)
{
    cout << "Here 1";
    int ans = -1;
    int sum1 = 0;
    int sum2 = 0;
    for (int x = 0; x < size; x++)
    {

        if (x == 0)
        {
            sum1 = 0;
        }
        else
        {
            for (int u = x - 1; u >= 0; u--)
            {
                cout << "Here 3";
                sum1 = sum1 + name[u];
            }
        }
        if (x == size - 1)
        {
            sum2 = 0;
        }
        else
        {

            for (int f = x + 1; x < size; f++)
            {
                // cout << "Here 2";
                sum2 = sum2 + name[f];
            }
        }
        if (sum1 == sum2)
        {
            ans = x;
            return ans;
        }
        sum1 = 0;
        sum2=0;
    }

    return -1;
}

int main()
{
    int array[6]{1, 7, 3, 6, 5, 6};
    cout << print(array, 6) << endl;
}