class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1, count=0;
        sort(nums.begin(),nums.end());
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==k){
                count++;
                l++;
                r--;
            }
            else if(sum>k){
                r--;
            }
            else{
                l++;
            }
        }
        return count;
    }
};