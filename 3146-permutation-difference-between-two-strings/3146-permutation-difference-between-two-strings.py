class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        mp={}
        for i in range(len(s)):
            mp[s[i]]=i
        ans=0
        for i in range(len(t)):
            ans+=abs(mp[t[i]]-i)
        return ans
        