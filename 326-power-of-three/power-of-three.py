class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0:
            return False
        if n == 1 or n == 3:
            return True

        while n % 3 == 0:
            n = n / 3

        return n == 1
        