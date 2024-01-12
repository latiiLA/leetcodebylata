class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        #using bucket search
        dictionary = {}
        freq = [[] for i in range(len(nums) + 1)]
        for num in nums:
            # if num in nums:
            #     dictionary[num] += 1
            # else:
            #     dictionary[num] = 1

            # represents the above four lines of code to one
            dictionary[num] = 1 + dictionary.get(num, 0)
        
        # print(dictionary)

        for n, c in dictionary.items():
            freq[c].append(n)
        
        # print(freq)

        res = []
        for i in range(len(freq) - 1, 0, -1):
            for j in freq[i]:
                res.append(j)
                if len(res) == k:
                    return res

        

