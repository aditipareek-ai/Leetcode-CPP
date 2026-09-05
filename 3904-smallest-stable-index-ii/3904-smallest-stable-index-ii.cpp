class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxLeft(n);
        vector<int> minRight(n);

        maxLeft[0] = nums[0];
        for(int i = 1; i<n; i++){
            maxLeft[i] = max(maxLeft[i-1], nums[i]);
        }
        minRight[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            minRight[i] = min(minRight[i+1], nums[i]);
        }
        for(int i = 0; i<n; i++){
            int x = maxLeft[i] - minRight[i];
            if(k>=x){
                return i;
            }
        }
        return -1;
    }
};