class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt=0;
        int i=0;
        
        for(;i<s.size();i++){
            if(s[i]==' '){
                cnt++;
                if(cnt==k)break;
            } 
            
        }
        
        return s.substr(0,i);
    }
};
