class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int>> v(r);
        
        for(int i = 0; i < c; i++){
            int cur = 0;
            for(int j = 0; j < r; j++){
                if(matrix[j][i] == 1){
                    cur++;
                    v[j].push_back(cur);
                }
                else
                    cur = 0;
            }
        }
        int ans = 0;
        for(int i = 0; i < r; i++){
            sort(v[i].begin(), v[i].end(), greater<int>());
            for(int j = 1; j <= v[i].size(); j++)
                ans = max(ans, j * v[i][j-1]);
        }

        return ans;
    }
};
