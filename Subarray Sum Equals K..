class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> cnt; // cnt[s]: count of subarrays having some sum s
        int sum=0;
        cnt[sum] = 1;

        int ans = 0;
        for (int ele : nums) {
            sum += ele;
            if (cnt[sum-k] > 0)
                ans += cnt[sum-k];
            cnt[sum] ++;
        }
        return ans;
    }
};
