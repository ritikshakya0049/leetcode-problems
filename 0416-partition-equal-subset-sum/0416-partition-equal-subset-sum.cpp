class Solution {
public:
    bool solve(vector<int>& nums,int total,int i,vector<vector<int>>& dp){
        if(i==nums.size()) return false;
        if(total==0) return true;
        if(total<0) return false;

        if(dp[i][total]!=-1) return dp[i][total];

        bool take=solve(nums,total-nums[i],i+1,dp);
        bool nottake=solve(nums,total,i+1,dp);

        return dp[i][total]=(take||nottake);
    }


    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=nums[i];
        }
        if(ans%2!=0) return false;
        int total=ans/2;
        vector<vector<int>>dp(n,vector<int>(total+1,-1));
        return solve(nums,total,0,dp);
    }
};