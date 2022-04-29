class Solution {
public:
    int fib(int n) {
      
        /*
        
            1. fibonacci numbers need two base case
                - when n == 0, 0;
                - when n == 1, 1;
            
            2. index - 2 + index - 1
                using recursion
        */
        
        
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        else
            return fib(n - 2) + fib(n - 1);
        
    }
};