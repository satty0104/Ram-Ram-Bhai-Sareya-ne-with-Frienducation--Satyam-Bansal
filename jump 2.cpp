class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n<= 1) return 0;
        int maxi =0;
        int curr=0;
        int cnt=0;
        for(int i=0; i<n-1; i++){
            maxi = max(maxi, i+ nums[i]);
            if(i== curr){
                cnt++;
                curr = maxi;
                if(curr>= n-1){
                    break;
                }
            }
        }
        return cnt;
    }
};
