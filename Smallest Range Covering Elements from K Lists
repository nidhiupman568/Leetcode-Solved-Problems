class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        vector<pair<int,int>>ve;
        int n=nums.size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(auto j:nums[i])
            {
                ve.push_back({j,i});
            }
        }
        sort(ve.begin(),ve.end());  
        vector<int>ans;
        map<int,int>seen;
        int total=0;
        int req=n;
         i=0,j=0;
        int sz=ve.size();
        int mini=1e9;
        while(i<sz)
        {
            seen[ve[i].second]++;
            if(seen[ve[i].second]==1)
            {
                total++;
            }
            if(total==req)
            {
                while(seen[ve[j].second]>1)
                {
                    seen[ve[j++].second]--;
                }
                if(ve[i].first-ve[j].first<mini)
                {
                    mini=ve[i].first-ve[j].first;
                    ans=vector<int>{ve[i].first,ve[j].first};
                }
            }
            i++;
            
        }

        return ans;
    }
};
