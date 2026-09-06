class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxCount=0
        count=0
        for num in nums:
            if num==1:
                count+=1
                maxCount=max(count,maxCount)
            else:
                count=0
        return maxCount        