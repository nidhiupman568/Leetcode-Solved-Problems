class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>& color,int node)
    {
        color[node]=1;  // Initially assume that the node is unsafe.
        
        for(auto cur : graph[node])
            if((color[cur]==0 && dfs(graph,color,cur)) || color[cur]==1)
                return true;
        
        color[node]=2;  // If there is no cycle mark node as safe.
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> color(graph.size()),result;
		
		// If node is visited and safe or unvisited and does not contain cycle then add it to the answer.
        for(int i=0;i<graph.size();i++)
            if(color[i]==2 ||  !dfs(graph,color,i))
                result.push_back(i);
                
        return result;
    }
};
