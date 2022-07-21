"""
Author: Amal Matty Antony
"""
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        prev, pos = nums[0], 0
        for i, val in enumerate(nums):
            if prev != val:
                prev = val
                pos += 1
                nums[pos] = val
        return pos+1
