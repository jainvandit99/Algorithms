// Solution by Vandit Jain (jainvandit99) TLE
class Solution {
public:
    
    
    bool isHidden(vector<int> peak1, vector<int> peak2){
        if((peak2[1] - peak1[1] >= 0 ) && abs(peak2[0] - peak1[0]) <= (peak2[1] - peak1[1]))
            return true;
        return false;
    }
    
    int visibleMountains(vector<vector<int>>& peaks) {
        int count = 0;
        for(int i=0;i<peaks.size();i++){
            bool flag = true;
            for(int j=0;j<peaks.size();j++){
                if(i==j) continue;
                if(isHidden(peaks[i],peaks[j])){
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};

// Solution by Vandit Jain (jainvandit99) TLE 43/45
/*
The Idea behind this solution is to convert the peaks array into the start and end coordinates
on the x-axis. Then, sort the start and end coordinates. Then we can check if the next peaks are 
"within" the previous biggest peaks. If not - we increment the count. 
*/
class Solution {
public:
    
    int visibleMountains(vector<vector<int>>& peaks) {
        int count = 1;
        for(int i=0;i<peaks.size();i++){
            peaks[i][0] = peaks[i][0] - peaks[i][1];
            peaks[i][1] = peaks[i][0] + 2*peaks[i][1];
        }
        sort(peaks.begin(),peaks.end(), [](const vector<int> v1, const vector<int> v2){
            if(v1[0] == v2[0]){
                return v1[1] > v2[1];
            }
            return v1[0] < v2[0];
        });
        int prevPeakPtr = 0;
        for(int i=1;i<peaks.size();i++){
            if(peaks[i][0] == peaks[prevPeakPtr][0] && peaks[i][1] == peaks[prevPeakPtr][1]){
                count--;
                continue;
            }
            else if(peaks[i][0] >= peaks[prevPeakPtr][0] && peaks[i][1] <= peaks[prevPeakPtr][1]){
                continue;
            }
            prevPeakPtr = i;
            count++;
        }
        return count < 0? 0: count;
    }
};