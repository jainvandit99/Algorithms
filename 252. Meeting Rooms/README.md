# [252\. Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)

## Description

Difficulty: **Easy**  

Related Topics: [Array](https://leetcode.com/tag/array/), [Sorting](https://leetcode.com/tag/sorting/)


Given an array of meeting time `intervals` where intervals[i] = [start<sub>i</sub>, end<sub>i</sub>], determine if a person could attend all meetings.

**Example 1:**

```
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
```

**Example 2:**

```
Input: intervals = [[7,10],[2,4]]
Output: true
```

**Constraints:**

*   0 <= intervals.length <= 10<sup>4</sup>
*   `intervals[i].length == 2`
*   0 <= start<sub>i</sub> < end<sub>i</sub> <= 10<sup>6</sup>