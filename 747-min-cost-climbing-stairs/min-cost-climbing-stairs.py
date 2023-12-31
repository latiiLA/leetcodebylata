class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        #My First try
        # dp = [0] * (len(cost)+2)
        # for i in range(len(cost)-1, -1, -1):
        #     dp[i] = cost[i] + min(dp[i + 1], dp[i + 2])

        # print(dp)

        # return min(dp[0], dp[1])

        # dp = [0] * (len(cost)+1)
        # dp[len(cost)-1] = cost[len(cost)-1]
        # for i in range(len(cost)-2, -1, -1):
        #     dp[i] = cost[i] + min(dp[i + 1], dp[i + 2])

        # print(dp)

        # return min(dp[0], dp[1])

        #My first submission
        # dp = [0] * (len(cost))
        # dp[0] = cost[0]
        # dp[1] = cost[1]

        # for i in range(2, len(cost)):
        #     dp[i] = cost[i] + min(dp[i-1], dp[i-2])
        
        # print(dp)

        # return min(dp[-1], dp[-2])


        #trying to optimize after first submission is successfully passed

        dp0 = cost[0]
        dp1 = cost[1]

        for i in range(2, len(cost)):
            dp2 = cost[i] + min(dp1, dp0)
            dp0 = dp1
            dp1 = dp2

        return min(dp0, dp1)


       