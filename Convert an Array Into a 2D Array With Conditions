
/*
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& v) {
        unordered_map<int, int> um;
        for (auto &i : v){
            um[i]++;
        }
        vector<vector<int>> ans;
        while (!um.empty()) {
            vector<int> temp, toErase;
            for (auto &[f, s] : um) {
                temp.emplace_back(f);
                s--;
                if (s == 0)toErase.emplace_back(f);
            }
            ans.emplace_back(temp);
            for (auto &i : toErase){
                um.erase(i);
            }
        }
        return ans;
    }
};
*/

/*---------------------------(SIMPLIFIED)-------------------------------*/

/* Made a frequency map to store number of occurance of all elements.
The most appearing elements count will decide the number of row in answer vector.
If we have a element appearing twice then will run a loop to push it in 2 rows, similarly done for all.*/


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        int cnt =0;

        for(auto a:nums){
            mp[a]++;
            cnt = max(cnt,mp[a]);
        }
        vector<vector<int>>v(cnt);
        for(auto a: mp){
            int num = a.first;
            int freq = a.second;

            for(int i =0;i<freq;i++){
                v[i].push_back(num);
            }
        }
        return v;
        
    }
};
