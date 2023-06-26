//using space optimization
 int fib(int n) {
        int prev1 = 1;
        int prev2 = 0;

        int curr = 0;
        if(n==0){
            return prev2;
        }
        for(int i = 2; i<=n; i++){
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
        //you can return either prev1 or curr bcause they become equal at the end
        //if you want to return curr, then you need to initialize it with zero, also,, you'll need   
        //to handle for the case of n==1
        
        //on the other hand,, if you return prev1, you'll only need to handle the case when n==0
    }
