// Solution by Vandit Jain (jainvandit99) in Top Down DP
class Solution {
public:
    
    map<int,int> cache;
    int minCostClimbingStairs(vector<int>& cost, int pos){
        if(pos>=cost.size()) return 0;
        if(cache.find(pos) != cache.end()) return cache[pos];
        cache[pos] = cost[pos]+min(minCostClimbingStairs(cost,pos+1),minCostClimbingStairs(cost,pos+2));
        return cache[pos];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        return min(minCostClimbingStairs(cost,0),minCostClimbingStairs(cost,1));
    }
    
};


