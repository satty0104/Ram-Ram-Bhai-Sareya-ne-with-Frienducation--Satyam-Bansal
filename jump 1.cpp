class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        int maxi =nums[0];
        for(int i =1; i<n; i++){
            if(i<=maxi){
                
                maxi= max(maxi, i+nums[i]);
            }else{
                return false;
            }
        }
        if(maxi >= n-1){
            return true;
        }
        return false;
    }
};
