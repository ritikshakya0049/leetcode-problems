class Solution {
public:
    bool solve(vector<vector<char>>& grid,int i,int j,int row,int col,int a,vector<vector<vector<int>>>& dp){
        if(i>=row || j>=col){
            return false;
        }
        if(grid[i][j]=='('){
            a++;
        }
        else{
            a--;
        }
        if(a<0){
            return false;
        }  

        if(i==row-1 && j==col-1 && a==0 ){
            return true;
        }

        if(dp[i][j][a]!=-1) return dp[i][j][a];

        bool r=solve(grid,i,j+1,row,col,a,dp);
        bool d=solve(grid,i+1,j,row,col,a,dp);

        return dp[i][j][a]= r||d;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<vector<int>>>dp(row,vector<vector<int>>(col,vector<int>(row+col+1,-1)));
        return solve(grid,0,0,row,col,0,dp);
    }
};