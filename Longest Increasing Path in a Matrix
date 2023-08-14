class Solution {
public:
    int m, n;
    short path[200][200];
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();

        memset(path, 0, sizeof(path));
    
        int max_path = 1;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                max_path = max(max_path, dfs(i, j, matrix));

        return max_path;
    }

    int dfs(int i, int j, vector<vector<int>>& mat) {
        if(path[i][j] >   0) return path[i][j];
        if(path[i][j] == -1) return 0;
        int max_next = 0;
        path[i][j] = -1;
        if(i > 0   && mat[i][j] < mat[i-1][j]) max_next = max(max_next, dfs(i-1, j, mat));
        if(j > 0   && mat[i][j] < mat[i][j-1]) max_next = max(max_next, dfs(i, j-1, mat));
        if(i < m-1 && mat[i][j] < mat[i+1][j]) max_next = max(max_next, dfs(i+1, j, mat));
        if(j < n-1 && mat[i][j] < mat[i][j+1]) max_next = max(max_next, dfs(i, j+1, mat));
        return path[i][j] = 1 + max_next;
    }

public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        wcin.tie(nullptr);
        cerr.tie(nullptr);
        wcerr.tie(nullptr);
        clog.tie(nullptr);
        wclog.tie(nullptr);
    }
};
