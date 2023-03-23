#include <bits/stdc++.h>
#include<queue>
#include<set>
#include<list>
#include<unordered_map>
//Traversing a graph by BFS //
void adj(unordered_map<int,set<int>>&adjlist,vector<pair<int, int>>&edges){
    //Creation of adjacency list using map//
    for(int m=0;m<edges.size();m++){
        int u,v;
        //Firstly we will gather both the edges which corresponds to a given edge //
        u = edges[m].first;
        v = edges[m].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);

    }
} 
void bfs(unordered_map<int,set<int>>&adjlist,unordered_map<int,bool>&visited,int node,vector<int>&ans){
    queue<int>q;
    q.push(node);
    visited[node] = true;
    while(q.empty() != true){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);
        for(auto i : adjlist[frontnode]){
            if(visited[i] != true){
               q.push(i);
               visited[i] = true; 
            }
        }
    }

}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>>adjlist;
    unordered_map<int,bool>visited;
    vector<int>ans;
    adj(adjlist,edges);
    
    for(int m=0;m<vertex;m++){
        int node = m;
        if(visited[m] != true){
            bfs(adjlist,visited,node,ans);
        }
    }
    return ans;
}