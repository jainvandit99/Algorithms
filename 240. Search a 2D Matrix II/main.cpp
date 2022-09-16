// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int start_row, start_col,end_row,end_col,mid_row,mid_col;
        int row,col;
        row = 0;
        col = matrix[0].size()-1;
        while(row < matrix.size() && col >=0){
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) row++;
            else col--;
        }
        return false;
        
    }
};