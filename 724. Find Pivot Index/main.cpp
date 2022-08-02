// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0, totalUpToNow=0, remTotal=0;
        for(auto &n : nums)
            total+=n;
        for(int i=0;i<nums.size();i++){
            remTotal = total - totalUpToNow - nums[i];
            if(remTotal == totalUpToNow) return i;
            totalUpToNow+=nums[i];
        }
        return -1;
    }
};