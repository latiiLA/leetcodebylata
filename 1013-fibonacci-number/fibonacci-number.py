class Solution:
    def fib(self, n: int) -> int:
        memoization = [] * n
        memoization.append(0)
        memoization.append(1)

        for i in range(2, n+1):
            memoization.append(memoization[i - 1] + memoization[i - 2])

        return memoization[n]


