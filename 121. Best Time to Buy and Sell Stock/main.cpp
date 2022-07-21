// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Maintain Max and min and keep iterating
        int max = 0;
        int min = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i] - min > max){
                max = prices[i] - min;
            }
            if(prices[i] < min){
                min = prices[i];
            }
        }
        
        return max;
    }
};