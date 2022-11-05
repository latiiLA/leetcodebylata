class Solution {
public:
    int leftsum = 0, rightsum = 0;
    int pivotIndex(vector<int>& nums) {
       int i = 0;
        int j = nums.size();
        int sum = 0;
        vector<int> lsum, rsum;
        lsum.push_back(0);
        
        for(int i = 0;i<nums.size();i++){          
            sum += nums[i];  
            lsum.push_back(sum);
        }
        cout<<endl<<endl;
        sum = 0;
        rsum.push_back(0);
        for(int i = nums.size()-1;i>0;i--){        
            sum += nums[i];         
            rsum.push_back(sum);
        }

        for(int j=0;j<nums.size();j++){  
                 if(lsum[j] == rsum[nums.size()-1-j]){       
                        return j;
            }
        }
    return -1;
    }
};