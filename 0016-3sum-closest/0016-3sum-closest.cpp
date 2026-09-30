class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum1=nums[0]+nums[1]+nums[2];
        int mindif=abs(target-sum1);
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];

                int diff=abs(sum-target);
                
                if(mindif>diff){
                    sum1=sum;
                    mindif=diff;
                }

                if(sum==target){
                    return sum;
                }

                if(sum>target){
                    r--;

                }
                else{
                    l++;
                }

            }
        }
         return sum1;
       
    }
};