class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector <int> num;
        
        for (int i=0; i<nums.size(); i++)
             num.push_back(nums[i]);
       
        int count = 0;
        for(int j = 0;j<3;j++){
            
            for(int i=0; i<num.size();i++){
                if(num[i] == j){
                    nums[count] = j;
                    count++;
                }
            }
        }
        
    }
};