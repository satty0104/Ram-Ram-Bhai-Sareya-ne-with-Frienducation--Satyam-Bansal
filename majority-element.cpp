class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>m; // creating a hash map or frequency table to keep the track of elements and their frequency
        for(int i =0; i<n; i++){
            m[nums[i]]++; // inserting elemets in map
        }
       int  j= n/2;
        for(auto it : m){
            if(it.second>j){ // Iterating through map and checking which element has frequency more than n/2
                return it.first;
            }
        }
        return 0;
    }
};
