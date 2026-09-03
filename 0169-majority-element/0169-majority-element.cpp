class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int n=nums.size()/2;

        for(auto i:mpp){
            if(i.second>n) return i.first;
        }
        return 0;
    }
};