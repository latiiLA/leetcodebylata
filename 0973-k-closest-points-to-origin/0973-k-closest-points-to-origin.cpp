class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> closest;
        vector<vector<int>> result;
       int d;
        for(int i = 0; i<points.size();i++){
            d = (pow(points[i][0],2) + pow(points[i][1],2));
            closest.push_back({d,i});
        }
        sort(closest.begin(),closest.end());
        int i = 0;
        for(int j = 0; j<closest.size() && i<k;j++){
            result.push_back(points[closest[j][1]]);
                i++;
        }
        return result;
    }
    
};