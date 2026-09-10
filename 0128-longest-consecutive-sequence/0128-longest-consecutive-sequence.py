class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums: return 0
        seen=set()
        count=1
        maxCount=1
        for num in nums:
            seen.add(num)
        
        for num in seen:
            if num-1 not in seen:
                count=1
                while count+num in seen:
                    count+=1
                maxCount=max(maxCount,count)
        return maxCount

        