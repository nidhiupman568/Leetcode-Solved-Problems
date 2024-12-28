class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        const int n=nums.size();
        vector<int> ksum(n-k+1, 0), L(n-3*k+1, -1);
        int maxKsum=ksum[0]=accumulate(nums.begin(), nums.begin()+k, 0);
        L[0]=0;
        for(int i=1; i<n-k+1; i++){
            ksum[i]=ksum[i-1]-nums[i-1]+nums[i+k-1];
            if (i>n-3*k) continue;
            if (maxKsum<ksum[i]){
                maxKsum=ksum[i];
                L[i]=i;
            }
            else L[i]=L[i-1];
        //    cout<<i<<"->L->"<<L[i]<<" maxKsum="<<maxKsum<<endl;
        }
        vector<int> R(n-3*k+1, -1);
        maxKsum=ksum.back();
        R.back()=n-k;
        for(int i=n-k-1; i>=2*k; i--){
            if (maxKsum<=ksum[i]){// multiple answers, return the lexico smallest one
                maxKsum=ksum[i];
                R[i-2*k]=i;
            }
            else R[i-2*k]=R[i+1-2*k];
        //    cout<<i-2*k<<"->R->"<<R[i-2*k]<<" maxKsum="<<maxKsum<<endl;
        }
        vector<int> ans(3,-1);
        int max3K=0;
        for(int i=0; i<=n-3*k; i++){
             int sum3K=ksum[L[i]]+ksum[i+k]+ksum[R[i]];
             if (sum3K> max3K){
                max3K=sum3K;
                ans={L[i], i+k, R[i]};
             }
        }
        return ans;  
    }
};
