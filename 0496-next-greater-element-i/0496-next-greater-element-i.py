class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack=[]
        mp={}

        for num in nums2:
            while stack and num>stack[-1]:
                prev=stack.pop()
                mp[prev]=num
            stack.append(num)
        while stack:
            prev=stack.pop()
            mp[prev]=-1
        return [mp[num] for num in nums1]
        