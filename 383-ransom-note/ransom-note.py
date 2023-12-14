class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        dictionary = {}

        for i in range(len(ransomNote)):
            if ransomNote[i] in dictionary:
                dictionary[ransomNote[i]] += 1
            else:
                dictionary[ransomNote[i]] = 1
            
        for i in range(len(magazine)):
            if magazine[i] in dictionary:
                dictionary[magazine[i]] -= 1
        
        for i in dictionary:
            if dictionary[i] > 0:
                return False
        
        return True
