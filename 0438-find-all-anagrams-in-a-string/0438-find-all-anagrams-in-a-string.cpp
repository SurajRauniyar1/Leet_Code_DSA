class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<int>ans;
        if(n>m){
            return ans;
        }
        vector<int>freq2(26,0);
        vector<int>freq1(26,0);
        for(char ch:p){
            freq1[ch-'a']++;

        }
        for(int i=0;i<n;i++){
            freq2[s[i]-'a']++;
        }
        if(freq1==freq2){
            ans.push_back(0);
        }
        for(int i=n;i<m;i++){
            freq2[s[i-n]-'a']--;
            freq2[s[i]-'a']++;
            if(freq1==freq2) ans.push_back(i-n+1);
        }
        return ans;
    }
};