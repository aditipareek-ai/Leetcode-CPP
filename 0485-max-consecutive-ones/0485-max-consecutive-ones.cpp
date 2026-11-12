class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int right = 0;

        int count = 0;
        int maxi = 0;
        int n = nums.size();

            while(right<n){
                if(nums[right] == 1){
                    count++;
                    maxi = max(maxi, count);
                }
                else{
                    count = 0;
                }
                right++;
            }
            return maxi;
    }
};