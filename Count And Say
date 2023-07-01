class Solution {
public:
    string countAndSay(int n) {
        string ans="1", prev="";
        for(int i=1; i<n; ++i){
            for(int j=0; j<ans.size(); ++j){
                int c=1;
                while(j+c<ans.size() and ans[j]==ans[j+c]) ++c;
                j += (c-1);
                prev += to_string(c);
                prev += ans[j];
            }
            ans = prev;
            prev = "";
        }
        return ans;
    }
};
