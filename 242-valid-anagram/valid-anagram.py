class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        
        dictionary= {}
        for i in s:
            dictionary[i] = 1 + dictionary.get(i, 0)

        for i in t:
            if not i in dictionary or dictionary[i] == 0:
                return False
            dictionary[i] = dictionary[i] - 1

        for i in dictionary:
            if dictionary[i] != 0:
                return False

        return True