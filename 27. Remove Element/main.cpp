// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int duplicateCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                duplicateCount++;
            }else{
                nums[i-duplicateCount] = nums[i];
            }
        }
        return nums.size()-duplicateCount;
    }
};