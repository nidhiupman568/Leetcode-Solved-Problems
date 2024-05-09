class Solution {
public:
    long long maximumHappinessSum(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        long long ans = 0;
        int n=v.size()-1;
        int c=0;
        while(n>=0 && k>0) {
            if(v[n]-c>=0)
                ans=ans+v[n]-c;
            else
                break;
            c++;
            n--;
            k--;
        }
        return ans;
    }
};
