class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        i = 0
        result = 3
        if n == 1:
            return True
        while result < n:
            result = result * 3

        if result == n:
            return True
        
        return False

        