class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0,pro=1;
        while(n!=0){
            int d=n%10;
            s+=d;
            pro=pro*d;
            n=n/10;
        }
        int ans= pro-s;
        return ans;
    }
};
