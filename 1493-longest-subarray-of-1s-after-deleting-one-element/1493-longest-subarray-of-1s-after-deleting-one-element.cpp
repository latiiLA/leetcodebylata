class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int countzero = 0, count = 0, result = 0;
        int j = 0;
        
        for(int i = 0; i<nums.size(); i++){
          
           if(nums[i] == 0){
               countzero++;
           }
            while(countzero >1){
                if(nums[j] == 0){
                    countzero--;
                }
                j++;
            }
            result = max(result, i-j);
           
        }
       return result;
    }
};