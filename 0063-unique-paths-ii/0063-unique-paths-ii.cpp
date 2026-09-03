class Solution {
public:
    int solve(vector<vector<int>>& mat, int m, int n, int i, int j,vector<vector<int>>&dp) {
        if(i>m || j>n)
            return 0;

        if(mat[i][j]==1){
            return 0;
        }

        if(i==m && j==n)
            return 1;

        if(dp[i][j]!=-1) return dp[i][j];
        
        int right=solve(mat,m,n,i,j+1,dp);

        int down=solve(mat,m,n,i+1,j,dp);

        return dp[i][j]=right+down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size() - 1;
        int col = obstacleGrid[0].size() - 1;

        vector<vector<int>>dp(row+1,vector<int>(col+1,-1));

        return solve(obstacleGrid, row, col, 0, 0,dp);
    }
};