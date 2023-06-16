 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int count = 0;
        int sr = 0;
        int sc = 0;
        int er = r-1;
        int ec = c-1;
        vector<int> ans;
        
        while(count != r*c){
            
            //first row
            for(int i =sc; i<=ec; i++){
                ans.push_back(matrix[sr][i]);
                count++;
                if(count == r*c)
                    return ans;
            }
            sr++;
            
            //last col
            for(int i = sr; i<=er; i++ ){
                ans.push_back(matrix[i][ec]);
                count++;
                if(count == r*c)
                    return ans;
            }
            ec--;
            
            //last row
            for(int i = ec; i>=sc; i-- ){
                ans.push_back(matrix[er][i]);
                count++;
                if(count == r*c)
                    return ans;
            }
            er--;
            
            //first column
            for(int i = er; i>=sr; i--){
                ans.push_back(matrix[i][sc]);
                count++;
                if(count == r*c)
                    return ans;
            }
            sc++;
            
        }
        
        return ans;
        
    }
