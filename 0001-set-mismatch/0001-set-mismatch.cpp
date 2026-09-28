class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int n=nums.size();
        int msum=n*(n+1)/2;
        int re=-1;
        int mis=-1;
        int sum=0;
        for(auto it:mpp){
            sum+=it.first;
            if(it.second==2){
                re=it.first;
            }
        }
        mis=msum-sum;

        return{re,mis};
    }
};