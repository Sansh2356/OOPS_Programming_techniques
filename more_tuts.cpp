#include <iostream>
#include <string>
using namespace std;
int rightocc(int name[], int size, int key)
{
  int end = size - 1;
  int start = 0;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (name[mid] == key)
    {
      // int ans=mid;
      start = mid + 1;
    }
    if (name[mid] < key)
    {

      start = mid + 1;
    }
    if (name[mid] > key)
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  // mid=start+(end-start)/2;
  return mid;
}

int main()
{
  int array[5]{1, 2, 3, 4, 4};
  int key;
  cout << "enter key" << endl;
  cin >> key;
  rightocc(array, 4, key);
  cout << rightocc(array, 4, key) << endl;
}