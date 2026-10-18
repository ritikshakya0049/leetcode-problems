class Solution {
public:
    int maxCoins(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int k=nums.size()/3;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                ans+=nums[i];
                k--;

            }
            if(k==0){
                break;
            }
        }
        return ans;
    }
};