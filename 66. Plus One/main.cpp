// Solution By Vandit Jain (jainvandit99)
// Solution 1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        while(i>=0 && !incrementDigit(digits,i)){
            i--;
        }
        if(i==-1){
            // If none of the digits could be incremented in place (eg 99)
            // Resize the vector and add 1 in the first
            digits.insert(digits.begin(),1,1);
        }
        return digits;
    }
    
    bool incrementDigit(vector<int> &digits, int index){
        if(digits[index] == 9) {
            digits[index] = 0;
            return false;
        }
        digits[index]++;
        return true;
    }
};

// Solution By Vandit Jain (jainvandit99)
// Solution 2
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        return plusOne(digits,digits.size()-1);
    }
    
    vector<int> plusOne(vector<int> & digits, int index){
        if(index<0) {
            digits.insert(digits.begin(),1,1);
            return digits;
        }
        int sum = digits[index] + 1;
        digits[index] = sum % 10;
        return sum==10 ? plusOne(digits, index-1) : digits;
    }
};