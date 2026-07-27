class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n)
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // Frequency of pattern
        for (char ch : p)
            freqP[ch - 'a']++;

        // First window
        for (int i = 0; i < m; i++)
            freqS[s[i] - 'a']++;

        if (freqP == freqS)
            ans.push_back(0);

        // Slide window
        for (int i = m; i < n; i++) {

            // Remove left character
            freqS[s[i - m] - 'a']--;

            // Add right character
            freqS[s[i] - 'a']++;

            if (freqP == freqS)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};