# [243\. Shortest Word Distance](https://leetcode.com/problems/shortest-word-distance/)

## Description

Difficulty: **Easy**  

Related Topics: [Array](https://leetcode.com/tag/array/), [String](https://leetcode.com/tag/string/)


Given an array of strings `wordsDict` and two different strings that already exist in the array `word1` and `word2`, return _the shortest distance between these two words in the list_.

**Example 1:**

```
Input: wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "coding", word2 = "practice"
Output: 3
```

**Example 2:**

```
Input: wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "coding"
Output: 1
```

**Constraints:**

*   2 <= wordsDict.length <= 3 * 10<sup>4</sup>
*   `1 <= wordsDict[i].length <= 10`
*   `wordsDict[i]` consists of lowercase English letters.
*   `word1` and `word2` are in `wordsDict`.
*   `word1 != word2`