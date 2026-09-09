class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>s;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:nums){
            mini=min(it,mini);
            maxi=max(it,maxi);
        }
        unordered_set<int>st(nums.begin(),nums.end());

        for(int i=mini;i<=maxi;i++){
            if(st.find(i)==st.end()){
                s.push_back(i);
            }
        }
        sort(s.begin(),s.end());
        return s;
    }
};