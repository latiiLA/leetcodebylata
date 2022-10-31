class Solution {
public:
    bool flag = false;
    bool isPowerOfFour(int n) {
        // Option One
        // if(n == 1 || n == 4){
        //     return true;
        // }
        // else if(n<4){
        //     return false;
        // }
        // else if(n % 4 == 0 && n>4){
        //     n = n/4;
        //     cout<<n;
        //     if(n == 4){
        //         return flag = true;
        //     }
        //     else{
        //         isPowerOfFour(n);
        //     }
        // }
        // return flag;
        
        //Option two
        if(n == 1 || n==4){
            return true;
        }
        else if(n<4){
            return false;
        }
        else if(n%4 != 0){
            return false;
        }
        else{
            n = n/4;
            
            if(n==4){
                flag =  true;
                
            }
            else{
                 isPowerOfFour(n);
            }
           
        }
        return flag;
    }
};