class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mp={}
        for i in range(len(nums)):
            mp[nums[i]]=mp.get(nums[i],0)+1
        for num in nums:
            if mp[num]==1:
                return num
        