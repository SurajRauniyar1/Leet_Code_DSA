class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}
        for num in strs:
            key="".join(sorted(num))
            if key in mp:
                mp[key].append(num)
            else:
                mp[key]=[num]
        return list(mp.values())
        