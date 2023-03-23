#include <iostream>
#include <string>
#include<fstream>
using namespace std;
//useful classes required for files functioning-:
//fstream
//ifstream--->derived from fstream class
//ostream--->derived from fstream class
//two ways to open a file-:
//using the constructor and member function open()
//opening file and writing in it using constructor//
// int main(){
//     string st="hello world";
//     string st2;
//     ofstream out("sample1.txt");//write operation
//     out<<st;

//  //opening file and reading from it using constructor//
// ifstream in("sample1(b).txt");//read operation//
// in>>st2;
// getline(in,st2);

// cout<<st2;



// fstream is a baseclass
// ifstream is a derived class from baseclass used to read from a file
// ofstream is another derived class from baseclass used to write in a file
// file can be read by two ways namely-:
// 1)constructor;
// 2)member calling;
// int main(){
//     string st="hello world";
// string st2="bye world"
//     ofstream out("sample1.txt");//writing an operation//
//     out<<st;
//      ifstream if("sample1(b).txt");//reading operation //
//      if>>st2;
//      getline(object,st2)
//      cout<<st2;
// }
//Open()and eof()functions in file I/O streams//
 int main(){
ofstream out;
out.open("sample1.txt");
out<<"this is my name";
 }