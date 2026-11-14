class Solution:
    def checkSubarraySum(self, nums: list[int], k: int) -> bool:
        prefix_sum=0
        ans=0
        seen={0:-1}
        for i,num in enumerate(nums):
            prefix_sum+=num
            remainder=prefix_sum %k

            if remainder in seen:
                if i-seen[remainder]>=2:
                    return True
            else:
                seen[remainder]=i
        return False

        