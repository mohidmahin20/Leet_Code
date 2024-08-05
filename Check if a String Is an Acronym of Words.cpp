class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string a;
        for (int i = 0; i < words.size(); ++i) {
            a += words[i][0];
        }
        return a == s;
    }
};
