class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,maxlen=0;
        unordered_set<char>charSt;
        for(int right=0;right<s.size();right++){
            if(charSt.count(s[right])==0){
                charSt.insert(s[right]);
                maxlen=max(maxlen,right-left+1);
            }
            else{
                while(charSt.count(s[right])){
                    charSt.erase(s[left]);
                    left++;
                }
                charSt.insert(s[right]);
            }
        }
        return maxlen;
    }
};