class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int m=nums.size(),n=0;
        
        //find max value and store in n;
        
        for(int i=0;i<m;i++){
            if(n<nums[i].size())
                n=nums[i].size();
        }
        vector<vector<int>>temp(m+n);
        vector<int>ans;
        
        // convert mat into adjacency list and keep value in temp
        
        for(int i=0;i<m;i++){
            for(int j=0;j<nums[i].size();j++){
                temp[i+j].push_back(nums[i][j]);
            }
        }
        
        // here we reverse matrix
        
        for(int i=0;i<m+n;i++){
            reverse(temp[i].begin(),temp[i].end());
        }
        
        // all value  of temp in ans vector
        
         for(int i=0;i<m+n;i++){
            for(int j=0;j<temp[i].size();j++){
                ans.push_back(temp[i][j]);
            }
        }
        return ans;
    }
};
