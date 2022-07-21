"""
Author: Amal Matty Antony
"""
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
        
