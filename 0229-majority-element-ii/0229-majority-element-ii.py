class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        mp={}
        n=len(nums)

        for num in nums:
            mp[num]=mp.get(num,0)+1
        ans=[]
        for num in mp:
            if mp[num]>n//3:
                ans.append(num)
        return ans