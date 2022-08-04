// Solution By Vandit Jain (jainvandit99) in O(nlogn) time and O(1) space
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1) return true;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][1] > intervals[i+1][0]) return false;
        }
        return true;
    }
};