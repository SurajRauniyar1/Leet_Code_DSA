class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        ans={}
        for char in strs:
            key="".join(sorted(char))
            if key not in ans:
                ans[key]=[]
            ans[key].append(char)
        return list(ans.values())
        