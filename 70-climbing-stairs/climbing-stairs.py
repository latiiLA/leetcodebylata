class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 0 or n == 1:
            return 1
        result = [0] * (n+1)
        result[0] = 1
        result[1] = 1
        result[2] = 2
        print(result)
        for i in range(3, n+1):
            result[i] = result[i-1] + result[i-2]
            print(result)
        return result[-1]