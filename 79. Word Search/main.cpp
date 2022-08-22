// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    
    
    
    bool recurse(vector<vector<char>>& board, string word, int row, int col, vector<vector<bool>> &traversed){
        if(word.length() == 0) return true;
        if(row == board.size() || col == board[0].size() || row == -1 || col == -1){
            return false;
        }
        if(traversed[row][col]) return false;
        if(word[0] == board[row][col]){
            traversed[row][col] = true;
            bool result = recurse(board,word.substr(1,word.length()-1),row+1,col,traversed) || recurse(board,word.substr(1,word.length()-1),row,col+1,traversed) || recurse(board,word.substr(1,word.length()-1),row-1,col,traversed) || recurse(board,word.substr(1,word.length()-1),row,col-1,traversed);
            traversed[row][col] = false;
            return result;
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> traversed(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(recurse(board,word,i,j,traversed))
                    return true;
            }
        }
        return false;
    }
};