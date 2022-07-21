// Solution By Vandit Jain (jainvandit99) in O(n) time and O(n)space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> counter;
        int max,max_elem;
        for(int i=0;i<nums.size();i++){
            counter[nums[i]]++;
        }
        for(auto const&[key,val] : counter){
            if(val > max){
                max = val;
                max_elem = key;
            }
        }
        return max_elem;
    }
};

// Solution By Vandit Jain (jainvandit99) in O(n) time and O(1)space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0 ,max;
        for(int i=0;i<nums.size();i++){
            // If count is 0, then we have to update max and count
            if(count==0) max = nums[i];
            // If count is not 0, then we have to check if nums[i] is same as max
            // If yes, then we have to increment count
            if(nums[i] == max) count++;
            // If it is not the same, that means there is a different element than max which we 
            // compensate for
            else count--;
        }
        return max;
    }
};