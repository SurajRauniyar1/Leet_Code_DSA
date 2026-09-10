class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen={}
        ans=[]
        for i,num in enumerate(nums):
            comp=target-num
            if comp in seen:
                return[i,seen[comp]]
            else:
                seen[num]=i




        