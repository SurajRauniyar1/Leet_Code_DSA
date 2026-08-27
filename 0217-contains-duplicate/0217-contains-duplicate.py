class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        mp = set()
        for num in nums:
            if num in mp:
                return True
            mp.add(num)
        return False