class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>cnt;
       
        for (int i=0;i<arr.size();i++){
            ++cnt[arr[i]];
        }
        for (int i=0;i<arr.size();i++) {
            if(cnt[arr[i]]==1 && --k==0) {
                return arr[i];
            }
        }
        
        return "";
    }
};
