class Solution {
public:
    int numSteps(string s) {
        int c = 0;//counter which return the ans
        reverse(s.begin(),s.end());//do reverse "1011" s[0]represent the last dig
        while(s.length()!=1){
            // cout<<s<<endl;
            c++;
            if(s[0]=='1'){//odd 
                int i = 0;
                while(s[i]!='0'&&i<s.length()){
                    s[i]='0';
                    i++;
                }
                if(i==s.length()){//corner case
                    s+='1';
                }else{
                    s[i] = '1';
                }
            }else{//even 
               string l = s.substr(1,s.length()-1);
                s = l;
            }
        }
        return c;
    }
};
