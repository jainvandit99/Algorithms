// Solution by Vandit Jain (jainvandit99)
/*
Idea is to do a binary search on the time interval [l,r]. l is zero and r is the maximum possible time. 
*/
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        unsigned long long trips;
        long long lo = 0, hi = (long long) *max_element(time.begin(),time.end()) * (long long) totalTrips;
        long long mid;
        while(lo < hi){
            mid = (lo + hi)/2;
            trips = 0;
            for(int i=time.size()-1;i>=0;i--){
                trips += mid / time[i];
                if(trips > totalTrips) {
                    hi = mid;
                    continue;
                }
            }
            if(trips >= totalTrips) hi = mid;
            else lo = mid + 1;
        }
        
        return hi;
    }
};