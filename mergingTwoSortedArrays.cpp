#include <iostream>
#include <string>
#include <vector>
using namespace std;
int print(vector<int> v, int size)
{

    // apply bubble sort either by its own algorithm or by recursion//
    for (int x = 0; x < size; x++)
    {
        for (int j = 0; j < size - 1; j++)
        {

            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << "sorted array is:" << endl;
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> nums1{1, 2, 3, 4};
    vector<int> nums2{3, 2};
    for (int x = 0; x < nums2.size(); x++)
    {

        nums1.push_back(nums2[x]);
    }
    for (int f = 0; f < nums1.size(); f++)
    {
        cout << nums1[f] << endl;
    }
    print(nums1, nums1.size());
}
//actual size of vector is along with same number of zeroes which will be replaced by next array's elements.