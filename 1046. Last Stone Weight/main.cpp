// Solution by Vandit Jain (jainvandit99)
/*
Idea is to use a heap to store the elements of the array.
*/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(),stones.end());
        while(stones.size() > 1){
            int most = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            int secondMost = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            if(most == secondMost) continue;
            stones.push_back(most-secondMost);
            push_heap(stones.begin(),stones.end());
        }
        return stones.empty() ?  0 : stones[0];
    }
};