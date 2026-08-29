class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        np={}

        for ch in s:
            mp[ch]=mp.get(ch,0)+1
        for ch in t:
            np[ch]=np.get(ch,0)+1
        return mp==np
