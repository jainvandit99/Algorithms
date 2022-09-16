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

// Solution by Vandit Jain (jainvandit99) in Bottom Up DP
class Solution {
public:
        
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2) {
            return min(cost[0],cost[1]);
        }
        
        int CostDown1 = 0, CostDown2 = 0;
        for(int i=2;i<=cost.size();i++){
            int temp = CostDown1;
            CostDown1 = min(CostDown1 + cost[i-1],CostDown2 + cost[i-2]);
            CostDown2 = temp;
        }
        return CostDown1;
    }
    
};

