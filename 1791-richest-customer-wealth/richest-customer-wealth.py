class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        
        max_wealth = 0
        for i in range(0, len(accounts)):
            temp_sum = 0
            for j in range(len(accounts[i])):
                temp_sum += accounts[i][j]
            max_wealth = max(max_wealth, temp_sum)

        return max_wealth