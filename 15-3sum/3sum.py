class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        nums.sort()
        for i in range(len(nums) - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            j = i + 1
            k = len(nums) - 1
            while j < k:
                temp_sum = nums[i] + nums[j] + nums[k]
                if temp_sum == 0:
                    temp_list = []
                    temp_list.append(nums[i])
                    temp_list.append(nums[j])
                    temp_list.append(nums[k])
                    if not temp_list in result:
                        result.append(temp_list)
                    j += 1
                    k -= 1
                elif temp_sum > 0:
                    k -= 1
                elif temp_sum < 0:
                    j += 1
        return result
