class Solution {
public:
    int totalWaviness(int num1, int num2) {

        int count=0;
        for(int i=num1;i<=num2;i++){
            if(i<=99) continue;
            string s= to_string(i);
            for(int j=1;j<s.size()-1;j++){
                if((s[j]-'0') > (s[j-1]-'0') && (s[j]-'0') > (s[j+1]-'0')){
                    count++;
                }

                if((s[j]-'0') < (s[j-1]-'0') && (s[j]-'0') < (s[j+1]-'0')){
                    count++;
                }
            }

        }

        return count;
    }

};