class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        vector<char> result(s.size());
        
        for (int i = 0; i < s.size(); ++i) {
            result[indices[i]] = s[i];
        }
        
        return string(result.begin(), result.end());
        
    }
};
