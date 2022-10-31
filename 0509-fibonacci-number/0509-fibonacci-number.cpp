class Solution {
public:
    int f0 = 0, f1 = 1;
    int result = 0;
    int fib(int n) {
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else{
            return fib(n-1) + fib(n-2);
            
        }
        
        
    }
};