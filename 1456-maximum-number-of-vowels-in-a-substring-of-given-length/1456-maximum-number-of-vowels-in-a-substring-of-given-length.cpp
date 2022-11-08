class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size(), sum = 0,sum2 = 0,result=0;
        for(int i = 0; i<n;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                 sum+=1;
            }
           
        }
//         for(int i = 0; i<n;i++){
//             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
//                  sum+=1;
//             }
           
//         }
        if(k == 0){
        return 0;
    }
        
        for(int i = 0; i<k;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                 sum2+=1;
            }
           
        }
        // cout<<sum2;
            
        for(int i = k; i<n;i++){
            result = max(result, sum2);
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                 sum2+=1;
            }
            
            
            // cout<<result<<endl;
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                 sum2-=1;
            }
           // cout<<sum2<<endl;
            // sum2 = 0;
        }
        result = max(result, sum2);
        // cout<<sum2<<endl;
        // cout<<sum; 
        return result;
    }
   
};




















// int n = s.size(), sum = 0,result=0;
//         int j = k,i = 0;
//         while(i<=n-k){
//             sum = 0;
//             for(int z = i; z<j; z++){
//                 if(s[z] == 'a' || s[z] == 'e' || s[z] == 'i' || s[z] == 'o' || s[z] == 'u'){
//                     sum++;
//                     result = max(result, sum);
//                 }
//             }
//             i++;
//             j++;
//         }
//         return result;