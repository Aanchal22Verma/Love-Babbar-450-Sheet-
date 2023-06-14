#include <bits/stdc++.h> 

//if you make viisted and adjList as maos,, hten it gives TLE for large test cases
//if you give vector for both,, then it works fine
void dfs(int src, vector<bool> &visited, stack<int> &s,  vector<vector<int>> &adjList ){
            visited[src] = true;

            for(auto i: adjList[src]){
                if(!visited[i]){
                    dfs(i, visited, s, adjList);
                }
            }
            s.push(src);
        }
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<vector<int>> adjList(v);

    for(auto i:edges){
        int u = i[0];
        int v = i[1];

        adjList[u].push_back(v);

    }

    vector<bool> visited(v);
    stack<int> s;
    vector<int> ans;
    for(int i = 0; i<v; i++){
        if(!visited[i]){
            dfs(i, visited, s, adjList);
        }
    }

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}