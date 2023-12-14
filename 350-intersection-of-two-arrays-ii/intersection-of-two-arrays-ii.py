class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        dictionary = {}
        result = []
        for i in range(len(nums1)):
            if nums1[i] in dictionary:
                dictionary[nums1[i]] += 1
            else:
                dictionary[nums1[i]] = 1
        
        for i in range(len(nums2)):
            if nums2[i] in dictionary and dictionary[nums2[i]] > 0:
                result.append(nums2[i])
                dictionary[nums2[i]] -= 1
        
        return result