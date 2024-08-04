class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> cnt(n + 1);
        for (int& i : nums) {
            ++cnt[i];
        }
        for (int i = 1; i <= n; ++i) {
            int v = cnt[i];
            for (int j = 0; j < v; ++j) {
                if (ans.size() <= j) {
                    ans.push_back({});
                }
                ans[j].push_back(i);
            }
        }
        return ans;
    }
};
