class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int maxi = nums[0];
            for(int j = 0; j<=i; j++){
                maxi = max(maxi, nums[j]);
            }
            int mini = nums[i];
            for(int j = i; j<n; j++){
                mini = min(mini, nums[j]);
            }
            int x = maxi - mini;
            if(k>=x){
                return i;
            }
        }
        return -1;
    }
};