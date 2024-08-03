class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int dsum = 0;
    
    for (int num : nums) {
        while (num > 0) {
            dsum += num % 10;
            num /= 10;
        }
    }
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return abs(sum-dsum);
    }
};
