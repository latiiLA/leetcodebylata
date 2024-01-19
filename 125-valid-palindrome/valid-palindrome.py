class Solution:
    def isPalindrome(self, s: str) -> bool:
        news = ""

        for i in s:
            if i.isalnum():
                news = news + i.lower()

        i = 0
        j = len(news) - 1

        while i <= j:
            if news[i] != news[j]:
                return False
            i = i + 1
            j = j - 1

        return True
