class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        dictionaryi = {}
        dictionaryj = {}
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    dictionaryi[i] = i
                    dictionaryj[j] = j

        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if i in dictionaryi or j in dictionaryj:
                    matrix[i][j] = 0

        return matrix
        