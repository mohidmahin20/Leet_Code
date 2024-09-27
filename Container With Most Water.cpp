class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r= height.size()-1;
        int mx=0;
        
        while(l<r) {
            int cr= min(height[l],height[r])*(r-l);
            mx= max(mx,cr);

            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        
        return mx;
    }
};
