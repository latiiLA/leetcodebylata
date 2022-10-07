class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int temp;
        vector<int> result;
        for(int j = 0; j<nums.size()-1;j++){
            
        
        for(int i = 0; i<nums.size()-1;i++){
          
                if(nums[i]< nums[i+1]){
                    continue;
                }
                else{
                    temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
           
        }}
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == target){
                result.push_back(i);
            }
        }
        return result;
    }
};