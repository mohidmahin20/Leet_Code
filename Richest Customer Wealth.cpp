class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>v;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            v.push_back(sum);
        }
    sort(v.begin(),v.end(),greater<int>());
    return v[0];

        
    }
};
