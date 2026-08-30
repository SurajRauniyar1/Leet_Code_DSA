class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        st=1
       
        end =max(piles)
        while st<=end:
            mid=st+(end-st)//2
            hours=0
            for pile in piles:
                hours +=(pile+mid-1)//mid
            if hours<=h:
                end=mid-1
            else:
                st=mid+1
        return st
            
        