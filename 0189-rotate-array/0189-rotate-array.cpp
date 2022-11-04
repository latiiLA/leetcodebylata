class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int count = 0,temp;
        k = k % nums.size();
        int i = nums.size()-k;
        int j = nums.size()-1;
        
        if(nums.size() == 0){
            return ;
        }
        while(i<j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;j--;
        }
        i = 0;
        j = nums.size()-1-k; 
        while(i<j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;j--;
        }
        i = 0;
        j = nums.size()-1; 
        while(i<j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;j--;
        }
       
        }

    
};