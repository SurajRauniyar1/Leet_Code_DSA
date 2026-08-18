class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int n:nums){
            n=n*n;
         ans.push_back(n);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};