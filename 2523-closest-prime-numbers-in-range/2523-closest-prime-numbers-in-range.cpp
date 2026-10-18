class Solution {
public:
    bool isprime(int n){
        if(n<=1) return false;

        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                ans.push_back(i);            
            }
        }
        if(ans.size()<=1) return{-1,-1};
        int a=-1;
        int b=-1;
        int minsize=INT_MAX;
        for(int i=1;i<ans.size();i++){
            int mini=abs(ans[i]-ans[i-1]);

            if(mini<minsize){
                a=ans[i-1];
                b=ans[i];
                minsize=mini;
            }

        }
        return{a,b};
    }
};