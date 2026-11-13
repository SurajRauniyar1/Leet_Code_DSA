class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count=0
        prefix={0:1}
        prefix_sum=0
        count=0
        for num in nums:
            prefix_sum+=num
            remaining=prefix_sum-k
            if remaining in prefix:
                count+=prefix[remaining]
            prefix[prefix_sum]=prefix.get(prefix_sum,0)+1
        return count
        