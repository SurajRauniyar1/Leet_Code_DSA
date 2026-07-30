class Solution {
public:
    int maxArea(vector<int>& height) {
        int lh=0,rh=height.size()-1,maxWater=0,area=0;
        while(lh<rh){
            int ht = min(height[lh],height[rh]);
            int length = (rh-lh);
            area = ht*length;
            maxWater=max(maxWater,area);
           height[lh]<height[rh] ? lh++ :rh--;
        }
        return maxWater;
    }
};