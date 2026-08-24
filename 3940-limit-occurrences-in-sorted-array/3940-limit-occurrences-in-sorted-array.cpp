class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> frq;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            frq[nums[i]]++;
            if(frq[nums[i]]<=k){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};