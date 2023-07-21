class Solution {
public:
    int recur(string &s,string &t,int n,int m,vector<vector<int>>&dp)
    {
        if(n==0 and m==0)
            return 1;
        if(n==0)
            return 0;
        if(m==0)
            return 1;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n-1]==t[m-1])
            return dp[n][m]=recur(s,t,n-1,m-1,dp)+recur(s,t,n-1,m,dp);
        return dp[n][m]=recur(s,t,n-1,m,dp);
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return recur(s,t,n,m,dp);
    }
};
