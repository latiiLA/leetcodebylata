class Solution:
    def integerBreak(self, n: int) -> int:
        result = 1
        if(n == 2 or n == 3):
            return n - 1
        
        while n > 4:
            n -= 3
            result *= 3
        
        return n * result
        