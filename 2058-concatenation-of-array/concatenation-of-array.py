class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        concatenated = []
        count = 0
        while count < 2:
            for j in nums:
                concatenated.append(j)
            count += 1

        return concatenated
