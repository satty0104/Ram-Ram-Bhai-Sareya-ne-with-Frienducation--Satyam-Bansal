class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }

        //will not use this as it needs extra memory
        // set<int>unique;
        // for(int i =0; i<n; i++){
        //     unique.insert(nums[i]);
        // }
        // int i=0;
        // for(auto it= unique.begin(); it!= unique.end(); ++it){
        //     nums[i++]=*it;
        // }
        // return unique.size(); 

        int s =1;
        for(int t =1; t<n; t++){
            if(nums[t]!= nums[t-1]){
                nums[s++]=nums[t];
            }
        }
        return s;
    }
};
