/* using recursion*/
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
};

/* using memoization*/
class Solution {
public:
    int dp[31]={0};
    int fib(int n) {
        if(n<=1) return n;
        if(dp[n]!=0) return dp[n];
        return dp[n]=fib(n-1)+fib(n-2);
    }
};

/*using tabulation*/
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        vector<int> dp(n+1,-1);
        int dp[0]=0;
        int dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

/* using iterative and space optimization*/
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
            int curr_i = prev2+prev;
            prev2=prev;
            prev=curr_i;
        }
        return prev;
    }
};
