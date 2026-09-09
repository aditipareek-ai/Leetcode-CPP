class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        for(long long x = 999; x<n; x = x*1000 + 999){
            ans += n-x;
        }
        return ans;
    }
};