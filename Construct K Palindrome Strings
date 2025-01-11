class Solution {
public:
    bool canConstruct(string& s, int k) {
        const int n=s.size();
        if (n<k) return 0;
        bitset<26> freq=0;
        for(char c: s)
            freq.flip(c-'a');
        return freq.count()<=k;
    }
};
