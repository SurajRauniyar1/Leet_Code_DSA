class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        if not  nums: return 0
        count=1
        maxCount=1
        for i in range(len(nums)-2,-1,-1):
            if nums[i+1]-1==nums[i]:
                count+=1
                maxCount=max(maxCount,count)
            elif nums[i+1]==nums[i]:
                pass
            else:
                count=1
        return maxCount
        