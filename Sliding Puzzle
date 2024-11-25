class Solution {
public:
    
    int slidingPuzzle(vector<vector<int>>& board) {
        int dr[] = {0, 1, 0, -1};
        int dc[] = {-1, 0, 1, 0};
        vector<vector<int>> res(2, vector<int>(3));
        res[0][0] = 1;
        res[0][1] = 2;
        res[0][2] = 3;
        res[1][0] = 4;
        res[1][1] = 5;
        res[1][2] = 0;
        int r, c;
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                if(board[i][j] == 0){
                    r = i;
                    c = j;
                    break;
                }
            }
        }
        queue<pair<pair<int, int>, pair<vector<vector<int>>, int>>>q;
        q.push({{r, c}, {board, 0}});
        map<vector<vector<int>>, int> mp;
        mp[board]++;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            vector<vector<int>> v = q.front().second.first;
            int steps = q.front().second.second;
            q.pop();

            if(v == res) return steps;
            for(int i=0; i<4; i++){
                int nr = row+dr[i];
                int nc = col+dc[i];
                if(nc<3 && nr<2 && nr>=0 && nc>=0){
                    swap(v[nr][nc], v[row][col]);
                    if(mp.find(v)==mp.end()){
                        q.push({{nr, nc}, {v, steps+1}});
                        mp[v]++;
                    }
                    swap(v[nr][nc], v[row][col]);
                }
            }
        }
        return -1;
    }
};
