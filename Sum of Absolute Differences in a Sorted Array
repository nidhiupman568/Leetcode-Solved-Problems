
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int A=0, B=accumulate(nums.begin(), nums.end(), 0);
        vector<int> ans(n, 0);
        int i=0;
        #pragma unroll
        for(int x: nums){
            ans[i++]=(2*i-n)*x+B-A;
            A+=x;
            B-=x;
        }
        return ans;
    }
};
