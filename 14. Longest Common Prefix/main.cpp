// Solution by Vandit Jain (jainvandit99)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        int size = strs[0].length() < strs[strs.size()-1].length()? strs[0].length() : strs[strs.size()-1].length();
        for(int i=0;i<size;i++){
            if(strs[0][i] == strs[strs.size()-1][i]){
                ans += strs[0][i];
            }else break;
        }
        return ans;
    }
};