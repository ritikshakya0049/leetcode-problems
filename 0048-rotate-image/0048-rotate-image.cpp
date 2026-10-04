class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>>ans(m,vector<int>(n));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=matrix[j][i];
            }
        }

        for(int i=0;i<m;i++){
            int l=0,r=n-1;
            while(l<=r){
                swap(ans[i][l],ans[i][r]);
                l++;
                r--;
            }
        }
        matrix=ans;

    }
};