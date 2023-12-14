class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        dictionary= {}
        for i in range(len(s)):
            if s[i] in dictionary:
                dictionary[s[i]] += 1
            else:
                dictionary[s[i]] = 1

        for i in range(len(t)):
            if t[i] in dictionary:
                dictionary[t[i]] -= 1
            else:
                return t[i]

        for i in dictionary:
            if dictionary[i] < 0:
                return i
