// Solution by Vandit Jain (jainvandit99) using DP
/*
The idea behind this solution is to identify that the number of people being told the secret at 
a particular day is equal to the number of people spreading the secret on that day. So we maintain
a cache of the number of people who are TOLD the secret at a particular day. This also helps us 
know the count of people forgetting the secret on a particular day (forget days later). Then 
once we have filled the cache of people who were told the secret uptill n days. We iterate over
the last forget number of indices and add the count of people who were told the secret on that day. 
This is equal to the number of people who know the secret on that day. 
*/
class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long> cache(n+1,0);
        cache[1] = 1;
        const long MOD = 1e9 + 7;
        long  numberOfPeopleSpreading = 0;
        for(int i=2;i<=n;i++){
            long  numberOfNewPeopleSpreading = cache[max(i-delay,0)];
            long  numberOfPeopleForgetting = cache[max(i-forget,0)];
            numberOfPeopleSpreading += numberOfNewPeopleSpreading - numberOfPeopleForgetting;
            cache[i] = (numberOfPeopleSpreading + MOD) % MOD;
        }
        long res = 0;
        for(int i=n;i>n-forget;i--){
            res += cache[i];
        }
        return (res+MOD)%MOD;
    }
};