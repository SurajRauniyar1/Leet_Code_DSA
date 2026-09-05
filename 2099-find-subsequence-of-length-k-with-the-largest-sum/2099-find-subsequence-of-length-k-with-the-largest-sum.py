class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        indexed = []

        for i in range(len(nums)):
            indexed.append((nums[i], i))

        indexed.sort(reverse=True)

        selected = indexed[:k]

        selected.sort(key=lambda x: x[1])

        ans = []

        for num, index in selected:
            ans.append(num)

        return ans