// Solution By Vandit Jain (jainvandit99) in O(n) time and O(1)space
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> characterMapS2T;
        map<char, char> characterMapT2S;
        for(int i=0;i<s.length();i++){
            if(characterMapS2T.count(s[i]) > 0){
                if(characterMapS2T[s[i]] != t[i]) return false;
            }else{
                if(characterMapT2S.count(t[i]) > 0) return false;
                characterMapS2T[s[i]] = t[i];
                characterMapT2S[t[i]] = s[i];
            }
        }
        return true;
    }
};