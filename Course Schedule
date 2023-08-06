class Solution {
public:
    vector<int>color;
    bool cycle(int v, vector<vector<int>>& adj) {
        color[v] = 1;
        for(int i: adj[v]){
            if(color[i] == 0){
                if(cycle(i,adj)){
                    return true;
                }
            }else if(color[i] == 1){
                return true;
            }
        }
        color[v] = 2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n,vector<int>());
        color.assign(n,0);
        for(auto i : edges){
            adj[i[1]].push_back(i[0]);
        }
        for(int v = 0; v < n; ++v){
            if(color[v] == 0 && cycle(v,adj)){
                return false;
            }
        }
        return true;
    }
};
