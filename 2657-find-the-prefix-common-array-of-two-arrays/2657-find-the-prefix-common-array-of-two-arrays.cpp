class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mpp;
        int n=A.size();
        vector<int>ans(n);
        int ans1=0;
        for(int i=0;i<n;i++){
            mpp[A[i]]++;
            if(mpp[A[i]]==2){
                ans1++;
            }

            mpp[B[i]]++;
            if(mpp[B[i]]==2){
                ans1++;
            }

            ans[i]=ans1;
        }

        return ans;

    }
};