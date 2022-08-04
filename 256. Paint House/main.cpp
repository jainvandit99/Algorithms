// Solution by Vandit Jain (jainvandit99) - (Top Down Memoization)
class Solution {
public:
    map<pair<int,int>,int> cache;
    int findCostOfColor(vector<vector<int>>& costs, int row, int color){
        pair<int,int> key = make_pair(row,color);
        if(cache[key] != 0){
            return cache[key];
        }
        int minCostUpTillRow = costs[row][color];
        if(row == costs.size()-1) {}
        else if(color==0) minCostUpTillRow += min(findCostOfColor(costs,row+1,1), findCostOfColor(costs,row+1,2));
        else if(color==1) minCostUpTillRow += min(findCostOfColor(costs,row+1,0), findCostOfColor(costs,row+1,2));
        else if(color==2) minCostUpTillRow += min(findCostOfColor(costs,row+1,1), findCostOfColor(costs, row+1,0));
        cache[key] = minCostUpTillRow;
        return minCostUpTillRow;
    }
    int minCost(vector<vector<int>>& costs) {
        return min(findCostOfColor(costs,0,0),min(findCostOfColor(costs,0,1),findCostOfColor(costs,0,2)));
    }
    
};

// Solution by Vandit Jain (jainvandit99) - (Bottom Up)
class Solution {
public:
    
    int minCost(vector<vector<int>>& costs) {
        for(int i=costs.size()-2;i>=0;i--){
            costs[i][0] += min(costs[i+1][1], costs[i+1][2]);
            costs[i][1] += min(costs[i+1][0], costs[i+1][2]);
            costs[i][2] += min(costs[i+1][1], costs[i+1][0]);
        }
        if(costs.size() == 0) return 0;
        return min(min(costs[0][0],costs[0][1]),costs[0][2]);
    }
    
};