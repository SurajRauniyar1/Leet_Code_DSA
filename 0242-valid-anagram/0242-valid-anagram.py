class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        np={}
        for right in range(len(s)):
            mp[s[right]]=mp.get(s[right],0)+1
        for right in range(len(t)):
            np[t[right]]=np.get(t[right],0)+1
        return mp==np