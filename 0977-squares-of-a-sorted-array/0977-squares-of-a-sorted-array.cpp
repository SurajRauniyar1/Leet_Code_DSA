class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1, idx=nums.size()-1;
        vector<int>ans(nums.size());
        while(l<=r){
            if(abs(nums[l])<abs(nums[r])){
                ans[idx]=nums[r]*nums[r];
                idx--;
                r--;
            }
            else{
                ans[idx]=nums[l]*nums[l];
                idx--;
                l++;
            }
        }
        return ans;
    }
};