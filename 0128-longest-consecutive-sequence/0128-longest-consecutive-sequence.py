class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        count=1
        maxCount=1
        if not count:
            return 0
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i-1]==nums[i]:
                continue
            if nums[i-1]==nums[i]-1:
                count+=1
            else:
                count=1
            maxCount=max(count,maxCount)
        return maxCount
    