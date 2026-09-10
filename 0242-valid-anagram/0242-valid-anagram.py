class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        s=list(s)
        for ch in t:
            mp[ch]=mp.get(ch,0)+1
        for i in range(len(s)):
            if s[i] not in mp:
                return False
            mp[s[i]]-=1
            if mp[s[i]]<0:
                return False
        return True
        