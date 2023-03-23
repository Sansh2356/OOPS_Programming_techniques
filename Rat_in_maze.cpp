#include <iostream>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool condition(vector<vector<int>> maze, vector<vector<int>> mapping,int x,int y,int n)
{
    if(maze[x][y]==1 && mapping[x][y]==0 && (x>=0 && x<n) && (y>=0 && y<n)){
        return true;
    }
    else{
        return false;
    }
    
}
void solve(vector<vector<int>> maze, vector<vector<int>> mapping, string output, vector<string> &ans, int x,int y)
{

    // base case//
    if (maze[][] == maze[n][n])
    {
        ans.push_back(output);
        return;
    }
    // D,u,r,l//
    if (condition)
    {
        int newx=
        int newy=
        output.push_back('D');
        solve();
        output.pop_back();

    }
}
int main()
{
    vector<vector<int>> maze;
    vector<vector<int>> mapping;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            mapping[row][column] == 0;
        }
    }
    if ()
        string output;
    vector<string> ans;
    int index;
    solve(maze, mapping, output, ans, index);
}
/*
Time and space complexity of recursive algorithms 



*/