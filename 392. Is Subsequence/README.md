# [392\. Is Subsequence](https://leetcode.com/problems/is-subsequence/)

## Description

Difficulty: **Easy**  

Related Topics: [Two Pointers](https://leetcode.com/tag/two-pointers/), [String](https://leetcode.com/tag/string/), [Dynamic Programming](https://leetcode.com/tag/dynamic-programming/)


Given two strings `s` and `t`, return `true` _if_ `s` _is a **subsequence** of_ `t`_, or_ `false` _otherwise_.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"<u>a</u>b<u>c</u>d<u>e</u>"` while `"aec"` is not).

**Example 1:**

```
Input: s = "abc", t = "ahbgdc"
Output: true
```

**Example 2:**

```
Input: s = "axc", t = "ahbgdc"
Output: false
```

**Constraints:**

*   `0 <= s.length <= 100`
*   0 <= t.length <= 10<sup>4</sup>
*   `s` and `t` consist only of lowercase English letters.

**Follow up:** Suppose there are lots of incoming `s`, say s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>k</sub> where k >= 10<sup>9</sup>, and you want to check one by one to see if `t` has its subsequence. In this scenario, how would you change your code?
