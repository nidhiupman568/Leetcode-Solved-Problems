class Solution {
public:
   string addStrings(string num1, string num2) {
        int c=0,i=num1.length()-1,j=num2.length()-1;
        string ans="";
        while(i>=0||j>=0||c>0){
            if(i>=0){
                c+=num1[i]-'0';
                i--;
            }
            if(j>=0){
                c+=num2[j]-'0';
                j--;
            }
            
             ans += char(c % 10 + '0');
            c =c/ 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
