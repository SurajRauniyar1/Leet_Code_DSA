class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev=0
        if x<0: return False
        a=x
        
        while x:
            digit=x%10
            rev=rev*10+digit
            x=x//10
        
        return rev==a
        