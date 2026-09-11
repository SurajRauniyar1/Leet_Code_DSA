class Solution:
    def maxArea(self, height: List[int]) -> int:
        left=0
        right=len(height)-1
        maxArea=0
        while left<right:
            h=min(height[left],height[right])
            l=right-left
            area=h*l
            maxArea=max(maxArea,area)
            if height[left]>height[right]:
                right-=1
            else:
                left+=1
        return maxArea
        