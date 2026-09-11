class Solution:
    def trap(self, height: List[int]) -> int:
        left=0
        right=len(height)-1
        lefth=0
        righth=0
        count=0
        while left<right:
            if height[left]<=height[right]:
                if height[left]>lefth:
                    lefth=height[left]
                else:
                    count+=lefth-height[left]
                left+=1
            else:
                if height[right]>righth:
                    righth=height[right]
                else:
                    count+=righth-height[right]
                right-=1
        return count