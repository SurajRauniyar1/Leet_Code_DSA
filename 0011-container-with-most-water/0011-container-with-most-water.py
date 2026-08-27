class Solution:
    def maxArea(self, height: List[int]) -> int:
        left=0
        right=len(height)-1
        area=0
        while left< right:
            h = min(height[left],height[right])
            l=right-left
            c_area = h*l
            area= max(c_area,area)
            if height[left]>height[right]:
                right-=1
            else:
                left +=1
        return area
