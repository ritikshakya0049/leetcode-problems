class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);
        int maxi1=nums[0];
        for(int i=0;i<nums.size();i++){
            maxi1=max(nums[i],maxi1);
            maxi[i]=maxi1;
        }

        int minii=nums[n-1];
        for(int i=n-1;i>=0;i--){
            minii=min(minii,nums[i]);
            mini[i]=minii;
        }

        for(int i=0;i<nums.size();i++){
            if(maxi[i]-mini[i]<=k){
                return i;
            }
        }

        return -1;
    }
};