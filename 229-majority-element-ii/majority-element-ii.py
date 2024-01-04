class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        dictionary = {}
        result = []
        for i in range(0, len(nums)):
            if nums[i] in dictionary:
                dictionary[nums[i]] += 1
            else:
                dictionary[nums[i]] = 1

        for i in dictionary:
            if dictionary[i] > int(len(nums)/3):
                result.append(i)

        return result