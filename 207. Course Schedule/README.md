# [207\. Course Schedule](https://leetcode.com/problems/course-schedule/)

## Description

Difficulty: **Medium**  

Related Topics: [Depth-First Search](https://leetcode.com/tag/depth-first-search/), [Breadth-First Search](https://leetcode.com/tag/breadth-first-search/), [Graph](https://leetcode.com/tag/graph/), [Topological Sort](https://leetcode.com/tag/topological-sort/)


There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourses - 1`. You are given an array `prerequisites` where prerequisites[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that you **must** take course b<sub>i</sub> first if you want to take course a<sub>i</sub>.

*   For example, the pair `[0, 1]`, indicates that to take course `0` you have to first take course `1`.

Return `true` if you can finish all courses. Otherwise, return `false`.

**Example 1:**

```
Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0\. So it is possible.
```

**Example 2:**

```
Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1\. So it is impossible.
```

**Constraints:**

*   `1 <= numCourses <= 2000`
*   `0 <= prerequisites.length <= 5000`
*   `prerequisites[i].length == 2`
*   0 <= a<sub>i</sub>, b<sub>i</sub> < numCourses
*   All the pairs prerequisites[i] are **unique**.


## Solution

Language: **C++**

```c++
class Solution {
public:
    
    
    
    vector<vector<int>> graph;
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph = constructGraph(prerequisites, numCourses);
        vector<bool> traversed(numCourses,false);
        vector<bool> solved(numCourses, false);
        for(int i=0;i<numCourses;i++){ 
            if(!solved[i] && !acyclic(i,traversed, solved)) {
                // cout<<graph[i][j]<<endl;
                return false;
            }
        }
        
        return true;
    }
    
    vector<vector<int>> constructGraph(vector<vector<int>> prerequisites, int numCourses){
        vector<vector<int>> graph(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        return graph;
    }
    
    bool acyclic(int node, vector<bool> traversed, vector<bool> &solved){
        if(traversed[node]) {
            return false;
        }
        else if(solved[node]) return true;
        
        traversed[node] = solved[node] = true;
        
        for(int i = 0;i<graph[node].size();i++){
            if(!acyclic(graph[node][i], traversed, solved)) return false;
        }
        
        traversed[node] = false;
        return true;
        
    }
    
};
   
```