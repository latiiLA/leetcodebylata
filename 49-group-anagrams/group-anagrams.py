class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dictionary = defaultdict(list)
        for i in strs:
            sortedstrs = ''.join(sorted(i))
            dictionary[sortedstrs].append(i)

        return dictionary.values()

