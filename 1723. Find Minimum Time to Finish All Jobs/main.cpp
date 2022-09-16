// Solution by Vandit Jain (jainvandit99) TLE 63/64 passed
class Solution {
public:
    
    
    int minMax;
    void backtrack(vector<int> jobs, vector<int> &curr, int &currMax, int k, int i){
        if(i == jobs.size()){
            minMax = min(currMax, minMax);
            return;
        }
        
        int prevMax = currMax; 
        set<int> seen;
        for(int l = 0;  l<k; l++){
            if(seen.find(curr[l]) != seen.end()) continue;
            if(curr[l] + jobs[i] > minMax) continue;
            if(curr[l] + jobs[i] > currMax){
                currMax = curr[l] + jobs[i];
            }
            seen.insert(curr[l]);
            curr[l]+=jobs[i];
            backtrack(jobs,curr,currMax,k,i+1);
            curr[l]-=jobs[i];
            currMax = prevMax;
        }
    }
    
    int minimumTimeRequired(vector<int>& jobs, int k) {
        minMax = INT_MAX;
        int currMax = INT_MIN;
        vector<int> curr(k,0);
        backtrack(jobs, curr,currMax, k, 0);
        return minMax;
    }
};