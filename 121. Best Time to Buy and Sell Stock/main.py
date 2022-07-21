"""
Author: Amal Matty Antony 
"""
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        min_so_far = prices[0]
        for i in range(1,len(prices)):
            profit = max(profit, prices[i]-min_so_far)
            min_so_far = min(min_so_far, prices[i])
        return profit
        
