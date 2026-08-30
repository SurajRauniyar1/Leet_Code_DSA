class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        arr=[(num,i) for i,num in enumerate(nums)]
        arr.sort(reverse=True)
        selected = arr[:k]
        selected.sort(key=lambda x:x[1])
        return  [ num for num,i in selected]
        