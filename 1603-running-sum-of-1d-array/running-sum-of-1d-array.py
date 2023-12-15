class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running_sum = []

        for i in range(len(nums)):
            temp_sum = 0 
            for j in range(0, i+1):
                temp_sum += nums[j]
            running_sum.append(temp_sum)

        return running_sum