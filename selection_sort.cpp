#include <iostream>
using namespace std;
int print(int name[], int n)
{
   for (int i = 1; i < (n - 1); i++)
   {
      int min_index = i;
      for (int j = (i + 1); j < n; j++)
      {
         if (name[min_index] > name[j])
         {
            min_index = j;
         }
         swap(name[min_index], name[j]);
      }
   }
   for(int f)
}
int main()
{
   int arr[4]{1, 5, 4, 2};
}