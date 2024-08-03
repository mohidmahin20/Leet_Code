class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
         int ans = 0;
         vector<int>v;
    for (int i = 0; i < words.size();i++) {
        int flag=0;
        for(int j=0;j<words[i].size();j++){
            if(words[i][j]== x){
                 flag=1;
                 break;
            }  
        }
        if(flag){
                v.push_back(i);
            }
    }
    return v;
        
    }
};
