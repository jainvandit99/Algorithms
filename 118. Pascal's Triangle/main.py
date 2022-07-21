"""
Author: Amal Matty Antony
"""
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        base = [[1],[1,1]]
        if numRows <= 2:
            return base[:numRows]
        for row in range(3,numRows+1):
            new = [1]
            prev_row = base[row-2]
            for i in range(row-2):
                new.append(prev_row[i]+prev_row[i+1])
            new.append(1)
            base.append(new)
        return base
            
