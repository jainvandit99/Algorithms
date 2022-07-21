"""
Simple Python solution
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices = defaultdict(list)
        for i,num in enumerate(nums):
            other = target - num
            if other in indices:
                return indices[other],i
            indices[num] = i
        return -1,-1
