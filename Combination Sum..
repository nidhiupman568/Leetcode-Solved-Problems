class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
		// dp vector to store all possible combinations of the target sum
        vector <vector <vector <int>>> dp(target+1);
        dp[0]={{}};
        for(int &i:nums)
        {
		// Iterating through all the elements from array nums aka candidates
            for(int j=i;j<=target;j++)
            {
			// Finding all possible ways to achieve sum j from element i
                for(auto v:dp[j-i])
                {
                    v.push_back(i);
                    dp[j].push_back(v);
                }
            }
        }
		// Finally, returning our ans 🙃
        return dp[target];
    }
};
