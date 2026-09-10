class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        for num in nums:
            mp[num]=mp.get(num,0)+1
        selected=sorted(mp.items(), key=lambda x:x[1],reverse=True)
        ans=[]
        for x in selected:
            ans.append(x[0])
        return ans[:k]