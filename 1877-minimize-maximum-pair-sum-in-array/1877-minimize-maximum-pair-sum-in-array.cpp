class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i = 0,n = nums.size();
        vector<int> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n/2;i++){
            result.push_back(nums[i] + nums[nums.size()-1-i]);
        }
        int res = *max_element(result.begin(), result.end());
        return res;
    }
};