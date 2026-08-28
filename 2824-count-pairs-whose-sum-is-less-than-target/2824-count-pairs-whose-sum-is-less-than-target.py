class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        nums.sort()
        left=0
        count = 0
        right=len(nums)-1
        while left<right:
            sum=nums[left]+nums[right]
            if sum < target:
                count += right-left
            
                left +=1
            else:
                right -=1
        return count
