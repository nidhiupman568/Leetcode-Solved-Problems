class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, vector<string>> adj;
        unordered_map<string, int> inDegree;

        // Step 1: Build the graph and calculate in-degrees
        for (int i = 0; i < recipes.size(); i++) {
            for (string ingredient : ingredients[i]) {
                adj[ingredient].push_back(recipes[i]);
            }
            inDegree[recipes[i]] = ingredients[i].size();
        }

        // Step 2: Initialize the queue with initial supplies
        vector<string> result;
        queue<string> q;
        for (string supply : supplies) {
            q.push(supply);
        }

        // Step 3: BFS to find all possible recipes
        while (!q.empty()) {
            string curr = q.front();
            q.pop();
            for (string recipe : adj[curr]) {
                inDegree[recipe]--;
                if (inDegree[recipe] == 0) {
                    result.push_back(recipe);
                    q.push(recipe);
                }
            }
        }
        return result;
    }
};
