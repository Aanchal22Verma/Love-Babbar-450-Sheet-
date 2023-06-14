#include <bits/stdc++.h> 

void bfs(int src, unordered_map<int, bool> &visited, unordered_map<int, set<int>> &adjList, 
            unordered_map<int, int> &parent, bool &b){
             queue<int> q;
             q.push(src);
             visited[src] = true;
             parent[src] = -1;
             

             while(!q.empty()){
                 int frnt = q.front();
                 q.pop();
                 
                 
                 for(auto it: adjList[frnt]){
                     if(!visited[it]){
                         q.push(it);
                         visited[it] = true; 
                         parent[it] = frnt;
                     }
                     else if(visited[it] == true && parent[frnt] != it){
                         b =  true;
                         return;

                     }
                 }
             }
             b = false;
         }

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, set<int>> adjList;
    
    for(auto i: edges){
        int u = i[0];
        int v = i[1];
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    bool b = false;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            bfs(i, visited, adjList, parent, b);
            if(b== true){
                return "Yes";
            }
        }
    }
    if(b == false){
        return "No";
    }
}




