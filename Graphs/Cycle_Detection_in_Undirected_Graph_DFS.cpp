#include <bits/stdc++.h> 
void dfs(int src, int parent, unordered_map<int, bool> &visited, unordered_map<int, set<int>> &adjList, 
        bool &b ){
        visited[src] = true;
        
        for(auto it: adjList[src]){
            if(!visited[it]){
                dfs(it, src, visited, adjList, b);
            }
            else if(visited[it] && it != parent){
                b = true;
                return;                
            }
        }
      
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, set<int>> adjList;
    for(auto i:edges){
        int u = i[0];
        int v = i[1];
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    unordered_map<int, bool> visited;
    bool b = false;
    int parent = -1;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            dfs(i, parent, visited, adjList, b);
            if(b == true){
                return "Yes";
            }
        }
    }
    if(b == false){
        return "No";
    }
}
