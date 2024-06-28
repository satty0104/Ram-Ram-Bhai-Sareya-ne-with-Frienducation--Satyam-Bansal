class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // ensuring k to be between 0 and n
        vector<int> arr1(n);
       for(int i=0; i<k; ++i){ // copying the last elements
        arr1[i]=nums[n-k+i];
       }
       for(int i=k; i<n; ++i){ //copying the irst elements
        arr1[i] = nums[i-k];
       }
       for (int i = 0; i < n; ++i) { // then copying arr1 to original array
            nums[i] = arr1[i];
        }
       
    }
};
