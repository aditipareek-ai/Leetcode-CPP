class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> arr;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == 2){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};