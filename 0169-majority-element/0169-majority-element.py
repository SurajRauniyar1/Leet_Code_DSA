class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mp = {}
        for num in nums:
            mp[num] = mp.get(num,0)+1
            if mp[num] > len(nums)//2:
                return num
