class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int mini=INT_MAX,maxi=0;
         for(int i=0;i<n;i++){
             ans=max(ans,arr[i]-mini);
             mini=min(arr[i],mini);
           //  maxi=max(arr[i+1],maxi);
         }
         return ans;
    }
};
