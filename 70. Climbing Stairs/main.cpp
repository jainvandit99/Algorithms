// TLE Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};

// Solution By Vandit Jain (jainvandit99) using DP (Top Down)
class Solution {
public:
    
    map<int,int> cache;
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        if(cache[n] != 0) return cache[n];
        cache[n] = climbStairs(n-1) + climbStairs(n-2);
        return cache[n];
    }
};

// Solution By Vandit Jain (jainvandit99) using DP (bottom up)
class Solution {
public:
    
    int climbStairs(int n) {
        int cache1 = 1, cache2 = 2;
        int temp;
        if(n==1) return cache1;
        for(int i=3;i<=n;i++){
            temp = cache2;
            cache2 = cache1 + cache2;
            cache1 = temp;
        }
        return cache2;
    }
};