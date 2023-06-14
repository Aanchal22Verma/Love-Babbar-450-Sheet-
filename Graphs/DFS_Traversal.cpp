void dfs(int src, unordered_map<int, bool> &visited, unordered_map<int,list<int>> &adjList, 
        vector<int> &v){
            v.push_back(src);
            visited[src] = true;

            for(auto i:adjList[src]){
                if(!visited[i])
                    dfs(i, visited, adjList, v);
            }
        }

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, bool> visited;

    unordered_map<int,list<int>> adjList;
     for(int i = 0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
        
    }
   
    
    vector<vector<int>> ans;
    for(int i = 0; i<V; i++){
        if(!visited[i]){
            vector<int> v;
            dfs(i, visited, adjList, v);
            ans.push_back(v);
        }
    }
    return ans;
}