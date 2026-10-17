class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long pro = 1;

            for (int j = i; j < nums.size(); j++) {
                pro*= nums[j];

                if (pro < k) {
                    count++;
                }

                if(pro>=k){
                    break;
                }
            }
        }

        return count;
    }
};