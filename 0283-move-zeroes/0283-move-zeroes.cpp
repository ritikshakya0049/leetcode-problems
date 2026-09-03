class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         vector<int>ans;
         for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
         }
         int n=nums.size()-ans.size();
         while(n>0){
            ans.push_back(0);
            n--;
         }

         for(int i=0;i<nums.size();i++){
            nums[i]=ans[i];
         }
    }
};