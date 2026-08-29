class Solution:
    def mySqrt(self, x: int) -> int:
        st=0
        end=x
        ans=0
        while st<=end:
            mid=st+(end-st)//2
            if mid*mid==x:
                return mid
            elif mid*mid<x:
                ans=mid
                st=mid+1
            else:
                end=mid-1
        return ans
        