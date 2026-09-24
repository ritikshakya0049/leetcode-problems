class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            int sum=0;
            int n=nums[i];
            while(n>0){
                int last=n%10;
                sum=sum+last;
                n=n/10;
            }
            if(i==sum) return i;
        }
        return -1;
    }
};