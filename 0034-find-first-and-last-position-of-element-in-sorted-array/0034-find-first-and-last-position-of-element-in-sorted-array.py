class Solution:
    def firstPos(self, nums: List[int], target: int) -> List[int]:
        st=0
        end=len(nums)-1
        ans=-1
        while st<=end:
            mid=st+(end-st)//2
            if nums[mid]==target:
                ans=mid
                end=mid-1
            elif nums[mid]>target:
                end=mid-1
            else:
                st=mid+1
        return ans
    def secondPos(self, nums: List[int], target: int) -> List[int]:
        st=0
        end=len(nums)-1
        ans=-1
        while st<=end:
            mid=st+(end-st)//2
            if nums[mid]==target:
                ans=mid
                st=mid+1
            elif nums[mid]>target:
                end=mid-1
            else:
                st=mid+1
        return ans
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        return [self.firstPos(nums,target),self.secondPos(nums,target)]