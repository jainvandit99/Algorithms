"""
Author: Amal Matty Antony
"""
from math import factorial
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        """
        n C r = n! / (r! x (n-r)!)
        
        """
        n = rowIndex+1
        n_fac = factorial(n)
        a = 1
        b = n_fac
        
        ans = [1]
        for i in range(1,rowIndex):
            a *= i
            b = b//(n-i)
            print(n_fac, a, b)
            ans.append(n_fac//(a*b))
        return ans
