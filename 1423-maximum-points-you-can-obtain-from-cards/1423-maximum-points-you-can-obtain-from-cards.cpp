class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int i = 0, j = 0, sum = 0,  sumofk = 0, result = 0, n = cardPoints.size();
        
     for(int i = 0 ; i <  cardPoints.size(); i++){
         sum+=cardPoints[i];
     }
        if(k  == cardPoints.size()){
            return sum;
        }
        for(int i = 0; i < n-k-1; i++){
            sumofk += cardPoints[i];
        }
        for(int i = n-k-1;i<n;i++){
            sumofk += cardPoints[i];
            result = max(result, sum - sumofk);
            sumofk -= cardPoints[i-(n-k-1)];
            }
        return result;
    }
};