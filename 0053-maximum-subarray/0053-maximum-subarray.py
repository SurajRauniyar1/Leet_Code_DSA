class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=nums[0]
        current=0
        for num in nums:
            current += num
            ans = max(current, ans)

            if current<0:
                current =0
        return ans