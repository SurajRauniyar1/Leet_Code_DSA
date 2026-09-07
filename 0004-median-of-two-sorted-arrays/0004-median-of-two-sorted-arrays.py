class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num=nums1+nums2
        num.sort()
        n=len(num)
        if len(num)%2==1:
            return num[n//2]
        else:
            return (num[n//2-1]+num[n//2])/2
        