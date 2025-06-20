class Solution {
public:
    int maxDistance(string s, int k) {
       int ans=0;
        int n=s.size();
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            int temp =min(i+1,abs(mp['N']-mp['S']) + abs(mp['E']-mp['W']) +2*k);
            ans=max(ans,temp);
        }
        return ans;
    }
};
