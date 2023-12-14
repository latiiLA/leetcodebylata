class Solution:
    def firstUniqChar(self, s: str) -> int:
        dictionary = {}
        for i in range(len(s)):
            if s[i] in dictionary:
                dictionary[s[i]] += 1
            else:
                dictionary[s[i]] = 1

        for i in range(len(s)):
            if dictionary[s[i]] == 1:
                return i
        return -1