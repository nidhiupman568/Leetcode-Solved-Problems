class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        string ans;
        priority_queue<pair<int,char>> pq;
        for(auto x:m)
        {
            pq.push(make_pair(x.second,x.first));
        }
        while(!pq.empty())
        {
            char ch=pq.top().second;
            int ct=pq.top().first;
            while(ct--)
                ans+=ch;
            pq.pop();
        }
        return ans;
    }
};
