class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        ans=""
        while columnNumber:
            columnNumber-=1
            reminder=columnNumber % 26
            ans+=chr(reminder+ord('A'))
            columnNumber//=26
        return ans[::-1]
        