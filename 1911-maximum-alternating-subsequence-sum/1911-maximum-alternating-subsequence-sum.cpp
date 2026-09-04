class Solution {
public:
    long long solve(vector<int>& nums,int i,int plus,vector<vector<long long>>&dp){
        if(i>=nums.size()) return 0;
        
        if(dp[i][plus]!=-1) return dp[i][plus];
        long long take=0;

        if(plus==0){
            take=nums[i]+solve(nums,i+1,1,dp);
        }
        else{
            take=(-nums[i])+solve(nums,i+1,0,dp);
        }

        long long nottake=solve(nums,i+1,plus,dp);

        return dp[i][plus]=max(take,nottake);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        vector<vector<long long>>dp(nums.size(),vector<long long>(2,-1));
        return solve(nums,0,0,dp);
    }
};