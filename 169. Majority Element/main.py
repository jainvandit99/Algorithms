"""
Author: Chirag Vijayvargiya - Chirag9009
"""
# O(n) solution
from collections import Counter
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return Counter(nums).most_common(1)[0][0]
    
    
    
 # O(1) space solution
"""
Author: Amal Matty Antony
"""
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        max_elem, f = nums[0], 0
        for num in nums:
            if num != max_elem:
                f-=1
                if f < 0:
                    max_elem = num
                    f = 1
            else:
                f+=1
        return max_elem
