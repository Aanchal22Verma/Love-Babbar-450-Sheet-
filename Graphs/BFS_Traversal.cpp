#include <bits/stdc++.h> 

void bfs(int src, unordered_map<int, bool> &visited, unordered_map<int, set<int>> &adjList, 
         vector<int>& ans ){
             queue<int> q;
             q.push(src);
             visited[src] = true;
             

             while(!q.empty()){
                 int frnt = q.front();
                 q.pop();
                 ans.push_back(frnt);
                 
                 for(auto it: adjList[frnt]){
                     if(!visited[it]){
                         q.push(it);
                         visited[it] = true;
                        
                     }
                 }
             }
             
         }
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adjList;
    
    for(auto i: edges){
        int u = i.first;
        int v = i.second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    unordered_map<int, bool> visited;
    vector<int> ans;
    for(int i = 0; i<vertex; i++){
        if(!visited[i]){
            bfs(i, visited, adjList, ans);
        }
    }
    return ans;
}