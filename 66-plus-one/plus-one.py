class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        result = []
        num = 0

        for i in range(len(digits)):
            num = num * 10 + digits[i]
        num += 1

        while num >= 10:
            result.append(num % 10)
            num //= 10
        
        result.append(num)
        result.reverse()

        return result