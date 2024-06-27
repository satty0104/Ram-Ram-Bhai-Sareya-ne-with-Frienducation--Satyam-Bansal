class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; // pointer at the end of array1 till the elements
        int j = n-1; //pointer at the end of array2
        int k = m+n-1;// pointer at the end of array1 overall

        while(i>=0 && j>=0){
            if(nums2[j]>nums1[i]){
                nums1[k--]=nums2[j--];
            }else{
                nums1[k--] = nums1[i--];
            }
        }
        //copy the rest of array2
        for(; j>=0; j--, k--){
            nums1[k]=nums2[j];
        }
    }
};
