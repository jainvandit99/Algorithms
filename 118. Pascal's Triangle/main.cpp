class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution;
        solution.push_back(vector<int>{1});
        if(numRows == 1) return solution;
        vector<int> cache = {1,1};
        solution.push_back(cache);
        for(int i = 2;i<numRows;i++){
            vector<int> newRow(i+1,1);
            for(int j=1;j<=i/2;j++){
                newRow[j] = newRow[i-j] = cache[j-1] + cache[j];
            }
            solution.push_back(newRow);
            cache = newRow;
        }
        return solution;
    }
};