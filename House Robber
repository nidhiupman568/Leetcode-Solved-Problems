class Solution {
 public:
  int rob(vector<int>& nums) {
    int prev1 = 0;
    int prev2 = 0;

    for (const int num : nums) {
      const int dp = max(prev1, prev2 + num);
      prev2 = prev1;
      prev1 = dp;
    }

    return prev1;
  }
};
