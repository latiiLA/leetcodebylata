class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        
        dictionary= {}
        for i in range(len(nums)):
            if nums[i] in dictionary:
                if(i - dictionary[nums[i]] <= k):
                    return True
                else:
                    dictionary[nums[i]] = i
            else:
                dictionary[nums[i]] = i

        return False
                
