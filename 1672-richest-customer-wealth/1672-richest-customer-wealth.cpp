class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        vector<int> ans(n);

        for(int i = 0; i<n; i++){
            for(int j = 0; j<accounts[i].size(); j++){
                ans[i] += accounts[i][j];
            }
        }
        int maxi = ans[0];
        for(int i = 0; i<ans.size(); i++){
            maxi = max(maxi, ans[i]);
        }
        return maxi;
    }
};