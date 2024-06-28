class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1) return 0;
        int maxi =0;
        int start = prices[0];
        for(int i=1; i<n; i++){
            if(start< prices[i]){
                maxi += prices[i]-start;
            }
            start = prices[i];
        }
        return maxi;
    }
};
