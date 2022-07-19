class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start, end, mid;
        start = 0;
        end = nums.size();
        while(start<end){
            mid = (start+end)/2;
            if(target<nums[mid]){
                end = mid;
            }else if(target>nums[mid]){
                start = mid+1;
            }else{
                return mid;
            }
        }
        return start;
    }
};