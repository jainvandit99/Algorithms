// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                solution.push_back(m[nums[i]]);
                solution.push_back(i);
                return solution;
            }
            m[target-nums[i]] = i;
        }
        
        return solution;
    }
};