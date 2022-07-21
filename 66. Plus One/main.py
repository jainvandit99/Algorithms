"""
Author: Amal Matty Antony
"""
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 1
        for i in range(len(digits)-1,-1,-1):
            digits[i] += carry
            carry = max(0, digits[i] - 9)
            digits[i] %= 10
        if carry != 0:
            digits = [carry] + digits
        return  digits
        
