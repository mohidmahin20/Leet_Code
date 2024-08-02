class Solution {
public:
    int mySqrt(int n) {
        long long int s=0;
        long long int e=n;
        long long int mid= s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square =mid*mid;
            if(square == n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else {
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
};
