class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> max_k(nums);
        vector<int> ret;
        sort(max_k.rbegin(), max_k.rend());
        for (int i = 0; i < size(nums); i ++) {
            for (int j = 0; j < k; j ++) {
                if (nums[i] == max_k[j]) {
                    ret.push_back(nums[i]);
                    nums[i] = -1000000;
                    max_k[j] = 1000000;
                    if (size(ret) == k) return ret;
                }
            }
        }
        return ret;
    }
};
