void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
         //take transpose
         for(int i = 0; i<n; i++){
             for(int j = i; j<n; j++){
                 swap(matrix[i][j], matrix[j][i]);
             }
         }
         
         //exchange rows
         for(int i = 0, j = n-1; i<n/2 && j>=n/2; j--, i++){
             for(int k = 0; k<n; k++){
                 swap(matrix[i][k], matrix[j][k]);
             }
         }
    } 