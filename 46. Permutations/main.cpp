// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    
    vector<vector<int>> answer;
    
    void iterativeSol(vector<int>& nums, int i, int n){
        if(i==n){
            answer.push_back(nums);
            return;
        }
        
        for(int j=i;j<=n;j++){
            swap(nums[i],nums[j]);
            iterativeSol(nums,i+1,n);
            swap(nums[j],nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        iterativeSol(nums,0,nums.size()-1);
        return answer;
    }
};