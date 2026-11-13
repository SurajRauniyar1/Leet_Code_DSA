class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        if not nums:
            return 0
        num_set=set(nums)
        largest=1
        for num in num_set:
            if num-1 not in num_set:
                count=1
                current=num
                while current+1 in num_set:
                    current+=1
                    count+=1
                largest=max(largest,count)
        return largest