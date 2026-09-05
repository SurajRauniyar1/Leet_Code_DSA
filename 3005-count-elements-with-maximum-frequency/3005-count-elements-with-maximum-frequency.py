class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        freq={}
        
        for i in range(len(nums)):
            freq[nums[i]]=freq.get(nums[i],0)+1
        maxCount=max(freq.values())
        ans=0
        for num in freq:
            if freq[num]==maxCount:
                ans+=freq[num]
        return ans
        
        