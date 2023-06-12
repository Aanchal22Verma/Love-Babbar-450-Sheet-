
bool find3Numbers(int A[], int n, int X)
    {
        //optimised solution 
        //TC - O(nlogn + n^2)
      sort(A,A+n); //sort the array
        for(int i=0; i<n; i++){
           int low=i+1;  //ek pointer uske just aage se shuru
           int high=n-1; //ek pointer just end se shuru
           while(low<high){ // so that they don't cross each other and also so that we don't get same value again
               int current=A[i]+A[low]+A[high];
               if(current==X){
                   return 1;
               }
               if(current<X){//yani chhote hn number to low ko aage badha do
                   low++;
               }
               else{
                   high--; //yani bade hn number to high ko peeche le aao
               }
           }
        }
        return 0;
    }

};

//brute force approach gives tle
/*
for(int i = 0; i<n; i++){
            if(A[i]>X){
                continue;
            }
            for(int j = i+1; j<n; j++){
                if(A[j] > X || A[i] + A[j] > X){
                    continue;
                }
                for(int k = j+1; k<n; k++){
                    if(A[k]>X){
                        continue;
                    }
                    if(A[i] + A[j] + A[k] == X)
                        return true;
                }
            }
        }
        return false;*/

