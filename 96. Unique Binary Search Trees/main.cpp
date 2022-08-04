class Solution {
public:
    vector<int> cache = vector<int>(20,-1);
    int numTrees(int n) {
        if(n==1 || n==0) return 1;
        if(cache[n] != -1) return cache[n];
        int sol=0;
        for(int i=1;i<=n;i++){
            sol += (numTrees(i-1) * numTrees(n-i));
        }
        cache[n] = sol;
        return sol;
    }
};