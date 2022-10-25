
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int num = nums[nums.size()-1];
      vector<int> result;
        int count = 0;
        int counter = 1;
    for(int i=1;i<nums.size()-1;i++){
        if ((nums[i-1] < nums[i] && nums[i] < nums[i+1]) || (nums[i-1] > nums[i] && nums[i] > nums[i+1])) 
                swap(nums[i], nums[i+1]); 
    }
    
       
        return nums;
    }
};