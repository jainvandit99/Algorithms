# [222\. Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/)

## Description

Difficulty: **Medium**  

Related Topics: [Binary Search](https://leetcode.com/tag/binary-search/), [Tree](https://leetcode.com/tag/tree/), [Depth-First Search](https://leetcode.com/tag/depth-first-search/), [Binary Tree](https://leetcode.com/tag/binary-tree/)


Given the `root` of a **complete** binary tree, return the number of the nodes in the tree.

According to , every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between `1` and 2<sup>h</sup> nodes inclusive at the last level `h`.

Design an algorithm that runs in less than `O(n)` time complexity.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/01/14/complete.jpg)

```
Input: root = [1,2,3,4,5,6]
Output: 6
```

**Example 2:**

```
Input: root = []
Output: 0
```

**Example 3:**

```
Input: root = [1]
Output: 1
```

**Constraints:**

*   The number of nodes in the tree is in the range [0, 5 * 10<sup>4</sup>].
*   0 <= Node.val <= 5 * 10<sup>4</sup>
*   The tree is guaranteed to be **complete**.