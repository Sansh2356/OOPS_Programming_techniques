#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
char print(string x)
{
    int index2;
    int count[26]{0};
    for (int i = 0; i < x.length(); i++)
    {
        int index = 0;
        if ('a' <= x[i] <= 'z')
        {
            index = x[i] - 'a'; // 79-65=14=index of O//
            count[index]++;
        }
    }
    for (int j = 0; j < 26; j++)
    {
        int maximum = 0;
        if (count[j] > count[maximum])
        {
            maximum = count[j];
            index2 = j;
        }
    }
    return index2 + 'a';//use of ascii values for conversion of uper case to lower case and also for number of occurences//
}
int main()
{
    string name;
    cin >> name;
    print(name);
    cout << print(name) << endl;
}

int sumbro(int name[][4], int row, int col)
{
    int sum = 0; // i=j=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + name[i][j];
        }
        cout<<sum<<endl;
    }

}
int print(int name[][4], int key, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (name[i][j] == key)
            {
                cout << "Key found" << endl;
            }
        }
    }
}
int main()
{
    int array[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> array[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << array[row][col] << "  ";
        }
        cout << endl;
    }
    // int number;
    // cin >> number;
    //  print(array, number, 3, 4);
    sumbro(array, 3, 4);
    cout << sumbro(array, 3, 4) << endl;
}*/
int main(){
    matrix
}


// [a,b,c,d].size() = 4
// a,b,c,d = [1,2]
// [[1,2],[1,2],[1,2],[1,2]].size() = 4
// [[1,2],[1,2],[1,2],[1,2]][0] = [1,2].size() = 2