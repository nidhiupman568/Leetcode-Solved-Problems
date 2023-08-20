class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char, int> mp;
        
        for(int i=0; i<b.length(); i++) {
            mp[b[i]]++;
        }
        
        for(int i=0; i<a.length(); i++) {
            if(mp[a[i]]>0) mp[a[i]]--;
            else return false;
        }
        
        return true;
    }
};
