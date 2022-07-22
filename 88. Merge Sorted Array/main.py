"""
Author: Amal Matty Antony
"""
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        ptr = m+n-1
        m-=1
        n-=1
        while(n>=0 and m >=0):
            if nums1[m] > nums2[n]:
                nums1[ptr] = nums1[m]
                m-=1
            else:
                nums1[ptr] = nums2[n]
                n-=1
            ptr-=1
        while(n>=0):
            nums1[ptr] = nums2[n]
            ptr-=1
            n-=1
        