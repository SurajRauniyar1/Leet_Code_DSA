class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        seen={0:-1}
        prefix_sum=0
        ans=0
        for i,num in enumerate(nums):
            if num==0:
                prefix_sum-=1
            else:
                prefix_sum+=1
            if prefix_sum in seen:
                ans=max(ans,i-seen[prefix_sum])
            else:
                seen[prefix_sum]=i
        return ans        