class Solution:
    def minimumRightShifts(self, nums: List[int]) -> int:
        n = len(nums)
        breaks=[]
        for i in range(n):
            if nums[i]>nums[(i+1)%n]:
                breaks.append(i)
        if len(breaks)==0:
            return 0
        if len(breaks)>1:
            return -1
        return n-breaks[0]-1