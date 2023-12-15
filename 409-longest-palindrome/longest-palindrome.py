class Solution:
    def longestPalindrome(self, s: str) -> int:
        dictionary = {}
        for i in range(len(s)):
            if(s[i]) in dictionary:
                dictionary[s[i]] += 1
            else:
                dictionary[s[i]] = 1

        longest_palindrome = 0
        flag = False
        for i in dictionary:
            if dictionary[i] % 2 == 0:
                longest_palindrome += dictionary[i]
            else:
                longest_palindrome += dictionary[i] - 1
                flag = True

        if flag:
            longest_palindrome += 1
        return longest_palindrome

