class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int begin = 0, end = people.size()-1;
        int count =0;
        while(begin <= end){
            if(people[begin]+people[end] <=limit){
                count++;
                begin++;
                end--;
            }
            else if(begin>=end){
                count++;
                begin++;
                
            }
            else if(end>=begin){
                count++;
                end--;
            }
        }
        return count;
    }
};