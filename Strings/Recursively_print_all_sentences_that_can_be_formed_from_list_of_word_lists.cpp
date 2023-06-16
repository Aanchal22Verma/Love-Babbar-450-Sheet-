 void solve(vector<vector<string>>&list,int i, vector<vector<string>> &ans,vector<string> &temp){
        if(i>=list.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int j=0;j<list[i].size();j++){
            temp.push_back(list[i][j]);
            solve(list,i+1,ans,temp);
            temp.pop_back();
        }
        
        
    }
    
    vector<vector<string>> sentences(vector<vector<string>>&list){
        //Write your code here
        vector<vector<string>> ans;
        vector<string> temp;
        int i=0;
        solve(list,i,ans,temp);
        return ans;
    }
