class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char s=digit+'0';
        int count=0;
        for(int i=0;i<nums.size();i++){
            string ans=to_string(nums[i]);
            int l=0;
            int r=ans.size()-1;
            while(l<=r){
                if(ans[l]==s){
                    count++;
                }
                if(ans[r]==s && l!=r){
                    
                    count++;
                }
                l++;
                r--;
            }
        }
        return count;
    }
};