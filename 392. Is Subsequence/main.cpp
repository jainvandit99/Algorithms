// Solution By Vandit Jain (jainvandit99) (Greedy solution)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        else if(t.size() == 0) return false;
        if(s[0] == t[0]) return isSubsequence(s.substr(1,s.size()-1),t.substr(1,t.size()-1));
        return isSubsequence(s,t.substr(1,t.size()-1));
    }
};

// Solution By Vandit Jain (jainvandit99) in O(t) time and O(1) space (Two Pointer solution)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        if(s.length() == 0) return true;
        while(j<t.length()){
            if(s[i] == t[j]){
                if(s.length() == i+1) return true;
                else i++;
            }
            j++;
        }
        return false;
    }
};