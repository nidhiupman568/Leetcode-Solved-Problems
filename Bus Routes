class Solution {
public:
    int n;
    vector<unordered_set<int>> bus;
    void bus_set(vector<vector<int>>& routes) {
        bus.resize(n);
        int i = 0;
        #pragma unroll
        for(auto & r: routes)
            bus[i++] = unordered_set<int>(r.begin(), r.end());
    }
    vector<vector<int>> adj;
   bool has_intersection(const unordered_set<int>& busX, const unordered_set<int>& busY) {
        for (int x: busX){
            if (busY.count(x)) return 1;
        }
        return 0;
    }

    void build_adj(vector<unordered_set<int>>& bus) {
        adj.resize(n);
        #pragma unroll
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if (has_intersection(bus[i], bus[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
    }
    vector<bool> isTarget;
    void source_target(int source, int target, queue<int>& q, vector<int>&  dist) 
    {
        isTarget.assign(n, 0);
        #pragma unroll
        for(int i = 0; i < n; i++){
            if (bus[i].count(source)){
                q.push(i);
                dist[i]=1;
            }
            if (bus[i].count(target))
                isTarget[i] = 1;
        }
    }

    void print(auto& c){
        for(auto& v: c){
            for(int x: v)
                cout<<x<<", ";
            cout<<endl;
        }
    }
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) 
    {
        if (source==target) return 0;//edge case
        n = routes.size();
        bus_set(routes);
    //    print(bus);       
        build_adj(bus);
    //    print(adj);

        queue<int> q;
        vector<int> dist(n, n+1);
        source_target(source, target, q, dist);

        while(!q.empty()){
            int x = q.front();
            int d = dist[x];
        //    cout<<x<<" d="<<d<<endl;
            q.pop();
            if (isTarget[x]){
                return d;
            }
            #pragma unroll
            for(int y : adj[x]){
                if(dist[y] > d + 1){
                    dist[y] = d + 1;
                    q.push(y);
                }
            }
        }
        return -1;
    }
};
