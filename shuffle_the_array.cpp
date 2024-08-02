class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> xy;
        for (int i = 0; i < n; ++i) {
        xy.push_back(nums[i]);
        xy.push_back(nums[i + n]);
        }
    return xy;    
    }
};
