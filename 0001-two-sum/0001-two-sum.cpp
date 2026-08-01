class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int n=0; n<nums.size();n++){
            int ans=target-nums[n];
            if(mp.find(ans)!=mp.end()){
                return {mp[ans],n};
            }
            mp[nums[n]]=n;

        }
        return {};
    }
};