class Solution {
public:
        bool flag = false;
        bool isPowerOfThree(int n) {           
        if(n == 1 || n==3){
            return true;
        }
        else if(n<3){
            return false;
        }       
        else if(n%3 == 0 && n>=3){
            n = n/3;
            cout<<n;
            if(n == 3){
                return flag = true;               
            }
            else{
                isPowerOfThree(n);
            }           
        }         
        return flag;
    }        
};