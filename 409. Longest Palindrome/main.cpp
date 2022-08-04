// Solution By Vandit Jain (jainvandit99)
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> store;
        for(int i=0;i<s.length();i++){
            store[s[i]]++;
        }
        int result = 0;
        bool flag = false;
        for(auto it = store.begin(); it != store.end(); it++){
            if(it->second%2==0)  result+=it->second;
            else {
                flag = true;
                result+=it->second - 1;
            }
        }
        if (flag) return result + 1; else return result;
    }
};