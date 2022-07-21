// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> cache = {1,1};
        if(rowIndex == 0) return vector<int>{1};
        int i = 2;
        while(i<=rowIndex){
            vector<int> newRow(i+1,1);
            for(int j = 1; j<=i/2; j++)
                newRow[j] = newRow[i-j] = cache[j-1] + cache[j];
            cache = newRow;
            i++;
        }
        return cache;
    }
};