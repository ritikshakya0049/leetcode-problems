class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i]>0) break;
            int l=i+1;
            int r=nums.size()-1;

            while(l<r){
                int sum=(nums[i]+nums[l]+nums[r]);

                if(sum==0){
                    st.push_back({
                        nums[i],
                        nums[l],
                        nums[r]
                    });
                    l++;
                    r--;
                    while((nums[l]==nums[l-1]) && (l<r)){
                        l++;
                    }
                    while((nums[r]==nums[r+1]) && (l<r)){
                        r--;
                    }
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
                
            }
        }
        return st;
        
    }
};