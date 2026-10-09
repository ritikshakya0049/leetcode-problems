class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it:nums ){
            st.insert(it);
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int count=1;
            while(st.find(x+1)!=st.end()){
                count++;
                x=x+1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};