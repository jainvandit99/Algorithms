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
            if(count==0) max = nums[i];
            if(nums[i] == max) count++;
            else count--;
        }
        return max;
    }
};