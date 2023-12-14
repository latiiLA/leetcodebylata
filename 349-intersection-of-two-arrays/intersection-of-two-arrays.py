class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        dictionary = {}
        dictionary1 = {}
        for i in range(len(nums1)):
            if nums1[i] in dictionary:
                continue
            else:
                dictionary[nums1[i]] = nums1[i]
        
        for i in range(len(nums2)):
            if nums2[i] in dictionary:
                if(nums2[i] in dictionary1):
                    continue
                else:
                    dictionary1[nums2[i]] = nums2[i]

        return list(dictionary1)
            