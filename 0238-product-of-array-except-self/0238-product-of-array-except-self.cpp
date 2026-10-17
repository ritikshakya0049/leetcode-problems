class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>suff(n);
        vector<int>pre(n);
        vector<int>ans(n);

        for(int i=0;i<nums.size();i++){
            if(i==0){
                pre[0]=1;
                suff[n-1]=1;
            }
            else{
                pre[i]=pre[i-1]*nums[i-1];
                suff[n-i-1]=suff[n-i]*nums[n-i];
            }
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=pre[i]*suff[i];
        }

        return ans;
    }
};