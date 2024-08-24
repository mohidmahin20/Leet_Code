class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int stR = 0, enR = row - 1;
        int stC = 0, enC = col - 1;
        int cnt = 0, total = row * col;

        while (cnt < total) {
            for (int i = stC; cnt < total && i <= enC; i++) {
                ans.push_back(matrix[stR][i]);
                cnt++;
            }
            stR++;
            for (int i = stR; cnt < total && i <= enR; i++) {
                ans.push_back(matrix[i][enC]);
                cnt++;
            }
            enC--;
            for (int i = enC; cnt < total && i >= stC; i--) {
                ans.push_back(matrix[enR][i]);
                cnt++;
            }
            enR--;
            for (int i = enR; cnt < total && i >= stR; i--) {
                ans.push_back(matrix[i][stC]);
                cnt++;
            }
            stC++;
        }
        return ans;
    }
};
