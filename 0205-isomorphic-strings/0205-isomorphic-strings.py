class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        string1={}
        string2={}
        for i in range(len(s)):
            if s[i] in string1:
                if string1[s[i]]!=t[i]:
                    return False
            else:
                string1[s[i]]=t[i]
            if t[i] in string2:
                if string2[t[i]]!=s[i]:
                    return False
            else:
                string2[t[i]]=s[i]
        return True 

        