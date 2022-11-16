class Solution {
public:
    string removeKdigits(string num, int k) {
       
        stack<char> st;
        if(k >=num.size()){
           return "0";
       }
        
       
        for (int i = 0; i < num.size(); i++) {
           
            while (k>0 && !st.empty() && st.top()>num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
         // edge cases like "1111", "12345"
        while (k-->0) st.pop();

        string result="";
        while (!st.empty()) {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        // remove leading zeros if any (coonsider case num="100", k=1)
        auto idx = result.length()-1;
        for (int i=0; i<result.length(); i++) {
            if (result[i]=='0') continue;
            idx=i;
            break;
        }
        result = result.substr(idx);
        return result;
    }
};