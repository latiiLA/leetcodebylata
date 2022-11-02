class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        bool flag = false, flag2 = false;
        int k;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(flag){
                    if(nums1[i] < nums2[j]){
                        flag2 = true;
                        result.push_back(nums2[j]);
                        break;
                    }
                }
                else if(nums1[i] == nums2[j]){
                    flag = true;
                } 
                
            }
            if(!flag2){
            result.push_back(-1);
        }
       
            flag2 = false;flag = false;
        }
        
        return result;
    }
};