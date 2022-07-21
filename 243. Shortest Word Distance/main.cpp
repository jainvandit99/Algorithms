// Solution By Vandit Jain (jainvandit99) in O(n) time and O(1)space
class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int curr1 = -1, curr2 = -1, min = 30001;
        for(int i=0;i<wordsDict.size();i++){
            if(wordsDict[i] == word1){
                curr1 = i;
                if(curr2 != -1) {
                    int dist = curr1 - curr2;
                    if(dist<min) min = dist;
                    curr1 = i;
                    curr2 = -1;
                }
            }else if(wordsDict[i] == word2){
                curr2 = i;
                if(curr1 != -1){
                    int dist = curr2 - curr1;
                    if(dist<min) min = dist;
                    curr2 = i;
                    curr1 = -1;
                }
            }
        }
        return min;
    }
};