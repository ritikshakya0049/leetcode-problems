class Solution {
public:
    int solve(vector<vector<int>>&grid,int m,int n,int i,int j, vector<vector<int>>&dp){
        if(i>m || j>n){
            return INT_MAX/2; 
        }
        if(i==m && j==n) return grid[m][n];

        if(dp[i][j]!=-1) return dp[i][j];

        int right=grid[i][j]+solve(grid,m,n,i,j+1,dp);

        int down=grid[i][j]+solve(grid,m,n,i+1,j,dp);

        return dp[i][j]= min(right,down);


        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>dp(m,vector<int>(n,-1));

        return solve(grid,m-1,n-1,0,0,dp);
    }
};