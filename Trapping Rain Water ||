class Solution {
public:
    int trapRainWater(vector<vector<int>>& mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||j==0||i==n-1||j==m-1)
                {
                    pq.push({mat[i][j],{i,j}});
                    vis[i][j]=true;
                }
            }
        }
        vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
    int ans=0;
        while(pq.size())
        {
            auto temp=pq.top();
            pq.pop();
            int val=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            for(auto it:d)
            {
                int nx=x+it.first;
                int ny=y+it.second;
                if(nx>=0&&ny>=0&&nx<n&&ny<m&&vis[nx][ny]==false)
                {
                    vis[nx][ny]=true;
                    ans+=max(0,val-mat[nx][ny]);
                    pq.push({max(val,mat[nx][ny]),{nx,ny}});
                }
            }
        }
        return ans;
    }
};
