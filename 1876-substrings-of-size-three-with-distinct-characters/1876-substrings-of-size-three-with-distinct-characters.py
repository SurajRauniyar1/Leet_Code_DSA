class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        left=0
        count=0
        mp={}
        for right in range(len(s)):
            mp[s[right]]=mp.get(s[right],0)+1
            if right-left+1==3:
                if len(mp)==3:
                    count+=1
                mp[s[left]]-=1

                if mp[s[left]]==0:
                    del mp[s[left]]
                left+=1
        return count