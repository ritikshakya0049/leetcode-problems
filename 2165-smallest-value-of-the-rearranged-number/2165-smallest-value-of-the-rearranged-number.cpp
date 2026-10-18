class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        long long ans=0;
        if(num>0){
            string s=to_string(num);
            sort(s.begin(),s.end());
            int l=0;
            int r=0;
            if(s[l]=='0'){
                while(r<s.size() && s[r]=='0'){
                    r++;
                }
                swap(s[l],s[r]);
            }
            ans=stoll(s);

        }
        else{
            long long ans1=abs(num);
            string a=to_string(ans1);
            sort(a.begin(),a.end(),greater<char>());

            ans=stoll(a);
            ans=-ans;

        }
        return ans;
    }
};