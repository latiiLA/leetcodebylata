class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dictionary={}
        start = 0
        result = 0
        for i in range(len(s)):
            if s[i] in dictionary:        
                start = max(start, dictionary[s[i]]+1)
            result = max(result, i - start + 1)
            dictionary[s[i]] = i

        return result