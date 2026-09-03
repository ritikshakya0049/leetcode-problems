class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            int maxi=max(maxi,prices[i]-mini);
            mini=min(mini,prices[i]);
            ans=max(ans,maxi);
        }
        return ans;
    }
};