class Solution:
    def defangIPaddr(self, address: str) -> str:
        temp = ""
        result = ""
        for i in address:
            
            if i != '.':
                temp = temp + i
            elif i == '.' :
                result += temp
                result += '[.]'
                temp = ""

        result += temp

        return result