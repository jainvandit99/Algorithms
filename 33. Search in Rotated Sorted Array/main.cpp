// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1;
        int mid;
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(target == nums[mid]) return mid;
            else if(nums[mid] >= nums[lo]){
                if(target < nums[mid] && target >= nums[lo]) hi = mid-1;
                else lo = mid+1;
            }else{
                if(target <= nums[hi] && target > nums[mid]) lo = mid+1;
                else hi = mid-1;
            }
        }
        return -1;
    }
};

// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left<right){
            mid = (left+right)/2;
            if(nums[mid]>nums[right]) left = mid+1;
            else right = mid;
        }
        int centerIndex = left;
        cout<<centerIndex;
        left = 0;
        right = nums.size()-1;
        int realMid;
        while(left<=right){
            mid = (left+right)/2;
            realMid = (mid+centerIndex)%(nums.size());
            if(nums[realMid] == target) return realMid;
            else if(nums[realMid] < target) left = mid+1;
            else right = mid-1;
        }
        return -1;
    }
};