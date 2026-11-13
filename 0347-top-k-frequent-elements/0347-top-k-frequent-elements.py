class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq={}
        for num in nums:
            freq[num]=freq.get(num,0)+1
        
        ans=sorted(freq,key=lambda x:freq[x],reverse=True)
        return ans[:k]