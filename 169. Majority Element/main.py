"""
Author: Chirag Vijayvargiya - Chirag9009
"""
# O(n) solution
from collections import Counter
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return Counter(nums).most_common(1)[0][0]