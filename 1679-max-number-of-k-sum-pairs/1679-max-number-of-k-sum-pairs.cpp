class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result = 0;
        
        
        
        int end = nums.size()-1;
        
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i<end){
            if(nums[i]+nums[end] > k){
                --end;
            }
            else if(nums[i] + nums[end] < k){
                ++i;
            }
            else{
               --end;
                ++i;
                ++result;
            }
                
        }
        return result;
    }
};