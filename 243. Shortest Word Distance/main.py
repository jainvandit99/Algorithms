"""
Author: Amal Matty Antony
"""

# O(n) space 

from collections import defaultdict
class Solution:
    def shortestDistance(self, wordsDict: List[str], word1: str, word2: str) -> int:
        indices = defaultdict(list)
        for i,value in enumerate(wordsDict):
            indices[value].append(i)
        m = len(wordsDict)
        for a in indices[word1]:
            for b in indices[word2]:
                m = min(m, abs(a-b))
        return m


"""
Author: Chirag Vijayvargiya
"""
# constant space

class Solution:
    def shortestDistance(self, wordsDict: List[str], word1: str, word2: str) -> int:
        idx1 = float("inf")
        idx2 = float("-inf")
        dist = abs(idx1-idx2)
        for i, val in enumerate(wordsDict):
            if val == word1: 
                idx1 = i
                dist = min(dist, abs(idx1-idx2))
            if val == word2: 
                idx2 = i
                dist = min(dist, abs(idx1-idx2))
        return dist