class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        long int sum=0,sum2=0;
        int m=INT_MAX,j=0,i=0;
        int n=nums.size();
        
        while(i<n){
            if(sum<k){
            sum+=nums[i++];
                }
         if(sum==k){
             m=min(m,i-j);
             sum+=nums[i++];
         }
          while(sum>=k&&j<n){
                   m=min(m,i-j);
                    sum-=nums[j++];
                }
    
        }

   if(m==INT_MAX){return 0;}

        return m;
    }
};
