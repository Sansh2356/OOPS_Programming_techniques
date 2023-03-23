#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(vector<string> &ans, int index, string input)
{
    // base case//
    if (index >= input.length())
    {
        ans.push_back(input);
        return;
    }
    // recursive call by solving one case//
    for (int x = 0; x < input.length(); x++)
    {
        swap(input[index], input[x]);
        solve(ans, index + 1, input);
        // backtracking//
        swap(input[index], input[x]);
    }
}
int main()
{
    string output;
    string input;
    cin >> input;
    vector<string> ans;
    int index;
    solve( ans, index, input);
    // return ans;
}