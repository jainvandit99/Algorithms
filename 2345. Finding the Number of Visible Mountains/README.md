# [2345\. Finding the Number of Visible Mountains](https://leetcode.com/problems/finding-the-number-of-visible-mountains/)

## Description

Difficulty: **Medium**  

Related Topics: [Array](https://leetcode.com/tag/array/), [Stack](https://leetcode.com/tag/stack/), [Sorting](https://leetcode.com/tag/sorting/), [Monotonic Stack](https://leetcode.com/tag/monotonic-stack/)


You are given a **0-indexed** 2D integer array `peaks` where peaks[i] = [x<sub>i</sub>, y<sub>i</sub>] states that mountain `i` has a peak at coordinates (x<sub>i</sub>, y<sub>i</sub>). A mountain can be described as a right-angled isosceles triangle, with its base along the `x`-axis and a right angle at its peak. More formally, the **gradients** of ascending and descending the mountain are `1` and `-1` respectively.

A mountain is considered **visible** if its peak does not lie within another mountain (including the border of other mountains).

Return _the number of visible mountains_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2022/07/19/ex1.png)

```
Input: peaks = [[2,2],[6,3],[5,4]]
Output: 2
Explanation: The diagram above shows the mountains.
- Mountain 0 is visible since its peak does not lie within another mountain or its sides.
- Mountain 1 is not visible since its peak lies within the side of mountain 2.
- Mountain 2 is visible since its peak does not lie within another mountain or its sides.
There are 2 mountains that are visible.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2022/07/19/ex2new1.png)

```
Input: peaks = [[1,3],[1,3]]
Output: 0
Explanation: The diagram above shows the mountains (they completely overlap).
Both mountains are not visible since their peaks lie within each other.
```

**Constraints:**

*   1 <= peaks.length <= 10<sup>5</sup>
*   `peaks[i].length == 2`
*   1 <= x<sub>i</sub>, y<sub>i</sub> <= 10<sup>5</sup>