class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int m = target.size(), n = words[0].size(), MOD = 1e9 + 7;
        vector<vector<int>> freq(26, vector<int>(n, 0));
        for (auto& word : words)
            for (int i = 0; i < n; i++)
                freq[word[i] - 'a'][i]++;
        
        vector<long long> dp(m + 1, 0);
        dp[0] = 1;
        for (int j = 0; j < n; j++) {
            for (int i = m - 1; i >= 0; i--) {
                dp[i + 1] = (dp[i + 1] + dp[i] * freq[target[i] - 'a'][j]) % MOD;
            }
        }
        return dp[m];
    }
};
