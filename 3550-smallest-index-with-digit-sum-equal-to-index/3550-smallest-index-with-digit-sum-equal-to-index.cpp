class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int ans = 0;
            while(nums[i]>0){
                int num = nums[i]%10;
                ans += num;
                nums[i] /= 10;
            }
            if(ans == i){
                return i;
            }
        }
        return -1;
    }
};