class Solution:
    def hammingWeight(self, n: int) -> int:
        
        result = []
        while n >= 2:
            result.append(n % 2)
            n = n // 2

        result.append(n)
        count = 0

        for i in result:
            if i == 1:
                count = count + 1

        return count