class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(denominator == 0) return "";
        if(numerator == 0) return "0"; 
        unordered_map<long, int> appeared;
        string ans;
        
        long p_int = abs((long)numerator / (long)denominator);
        ans += string((numerator < 0) ^ (denominator < 0), '-'); 
        ans += to_string(p_int);
        long rem = abs((long)numerator % (long)denominator);
        if(rem == 0) return ans;
        ans += ".";
        
        while(rem){
            appeared[rem] = ans.size();
            rem *= 10;
            ans += to_string(rem / abs((long)denominator));
            rem %= abs((long)denominator);
            if(appeared.find(rem) != appeared.end()){
                ans.insert(appeared[rem], "(");
                ans += ")";
                break;
            }
        }
        
        return ans;
    }
};
