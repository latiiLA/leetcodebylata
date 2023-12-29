class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dictionary = {}
        s_list = s.strip().split()
        if len(pattern) != len(s_list):
            return False
        
        for i in range(0,len(pattern)):
            
            if pattern[i] in dictionary and dictionary[pattern[i]] != s_list[i] or s_list[i] in dictionary.values() and  not pattern[i] in dictionary:
                return False
            elif pattern[i] in dictionary and dictionary[pattern[i]] == s_list[i]:
                continue
            else:
                dictionary[pattern[i]] = s_list[i]
        
        return True