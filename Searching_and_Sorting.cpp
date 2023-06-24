 void merge(int arr[], int l, int m, int r)
    {
         int len1 = m-l+1;
         int len2 = r-m;
         
         int first[len1];
         int second[len2];
         
         int k = l;
         for(int i = 0; i<len1; i++){
             first[i] = arr[k++];
         }
         
         for(int i = 0; i<len2; i++){
             second[i] = arr[k++];
         }
         
         int index1 = 0;
         int index2 = 0;
         int i = l;
         while(index1<len1 && index2<len2){
             if(first[index1]<second[index2]){
                 arr[i++] = first[index1++]; 
             }
             else{
                 arr[i++] = second[index2++];
             }
         }
         
         while(index1<len1){
             arr[i++] = first[index1++];
         }
         
         while(index2<len2){
             arr[i++] = second[index2++];
         }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        
        if(l>=r){
            return;
        }
        
       int mid =  l + (r-l)/2;
            //left part ko sort
        mergeSort(arr, l, mid);
        
        //right part ko sort
        mergeSort(arr, mid+1, r);
        
        //merge sorted arrays
        merge(arr, l, mid, r);
    }
