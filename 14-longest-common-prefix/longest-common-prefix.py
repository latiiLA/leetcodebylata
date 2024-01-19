class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        minimum = len(strs[0])
        result = ""
        for i in strs:
            minimum = min(minimum, len(i))
        if len(strs) < 2:
            return strs[0]
        
        result = ""
        
        for i in range(minimum):
            for j in range(1, len(strs)):
                if strs[j][i] != strs[j-1][i]:
                    return result
            result = result + strs[j][i]
            

        return result