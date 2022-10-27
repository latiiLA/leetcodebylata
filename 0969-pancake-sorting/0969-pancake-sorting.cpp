class Solution {
public:
    
void rev(vector<int>& arr, int i) {
   int temp, st = 0;
   while (st < i) {
      temp = arr[st];
      arr[st] = arr[i];
      arr[i] = temp;
      st++;
      i--;
   }
}
int findmax(vector<int>& arr, int n) {
   int index, i;
   for (index = 0, i = 0; i < n; ++i){
      if (arr[i] > arr[index]) {
         index = i;
      }
   }
   return index;
}
void pancakeSort(vector<int>& arr, int n) {
    vector<int> result;
   for (int size = n; size > 1; size--) {
      int index = findmax(arr, size);
      if (index != size-1) {
         rev(arr, index);
         result.push_back(index);
         rev(arr, size-1);
          result.push_back(size-1);
      }
   }
    
}
    vector<int> pancakeSort(vector<int>& arr) {
        int k;
        vector<int> result;
        int sorted = 0;//number of sorted
        
        for(int i=arr.size(); i>1; i--){
            int index = findmax(arr,i);
            cout<<index<<i-1;
            // result.push_back(index);
            if(index != i-1){
                result.push_back(index+1);
                rev(arr,index);
                result.push_back(i);
                rev(arr, i-1);
                
            }
        }
        return result;
    }
   
};