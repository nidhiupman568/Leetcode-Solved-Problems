class Solution {
private:
    const int INF = 1061109567;
public:
    int cutOffTree(vector<vector<int>>& forest) {
        int n = forest.size() ;
        int m = forest[0].size() ;
        
        int ans = 0 ;
        
        set<pair<int,pair<int,int>>> points ;
        
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m; j++){
                if(forest[i][j]>1){
                    points.insert({forest[i][j], {i,j}}) ;
                }
            }
        }
		
        int sx = 0, sy = 0 ;
        for(auto elem :points){
            int dx = elem.second.first ;
            int dy = elem.second.second ;
            int bfs_dist = bfs(forest, n, m, sx, sy, dx, dy) ;
            if(bfs_dist == -1) return -1 ;
            ans+=bfs_dist ;
            forest[dx][dy] = 1;
            sx = dx ;
            sy = dy ;   
        }
		
        return ans ;    
    }
    
    int bfs(vector<vector<int>> &forest, int n, int m , int sx, int sy, int dx, int dy){
        int distance[n+2][m+2] ;
        memset(distance, 0x3f, sizeof(distance));
        int dirx[] = {1, 0, -1, 0} ;
        int diry[] = {0, 1,0, -1} ;
        
        queue<pair<int,int>> q;
        q.push({sx,sy}) ;
        distance[sx][sy] = 0 ;
        
        while(!q.empty()){
            pair<int,int> p = q.front() ;
            q.pop() ;
            if(p.first == dx && p.second == dy) return distance[dx][dy] ;
            
            for(int i = 0 ;i<4 ;i++){
                int x = p.first + dirx[i] ;
                int y = p.second + diry[i] ;
                
                if(x<0 || x>=n || y <0 || y>=m)continue ;
                if(forest[x][y] == 0)continue ;
                if(distance[x][y] != INF)continue ;
                distance[x][y] = distance[p.first][p.second] + 1 ;
                q.push({x,y}) ;
            }   
            
        }
        
        return -1 ;     
    } 
};
