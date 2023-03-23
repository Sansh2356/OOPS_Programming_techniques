#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(string input, string output, vector<string> &ans, int index, string mapping[])
{
    // base  case//
    if (index >= input.length())
    {
        ans.push_back(output);
        return;
    }
    // we will announce mapping and find number//
    // conversion of a number from character type to int type//
    int number = input[index] - '0';
    string digits = mapping[number];
    // recursive calls one by one number//
    for (int x = 0; x < digits.length(); x++)
    {
        output.push_back(digits[x]);
        solve(input, output, ans, index + 1, mapping);
        // backtracking call so that empty string can be returned back//
        output.pop_back();
    }
}

int main()
{
    string name;
    cin >> name;
    int index = 0;
    string output;
    vector<string> ans;
    string mapping[10]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(name, output, ans, index, mapping);
    //return ans;
}