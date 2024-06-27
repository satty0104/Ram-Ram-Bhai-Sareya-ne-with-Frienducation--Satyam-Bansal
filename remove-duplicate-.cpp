class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        // we will follow 2 pointer approach
        int i =2; // first two elements to be included and we will check from third element onwards
        for(int j=2; j<n; j++){
            if(nums[j]!= nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};
