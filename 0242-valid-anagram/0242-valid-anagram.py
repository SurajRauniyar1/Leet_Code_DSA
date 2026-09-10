class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        for ch in t:
            mp[ch]=mp.get(ch,0)+1
        for i in range(len(s)):
            if s[i]  not in mp:
                return False
            else:
                mp[s[i]]-=1
            if mp[s[i]]<0:return False
        if any(values!=0 for values in mp.values()):return False
        return True
        