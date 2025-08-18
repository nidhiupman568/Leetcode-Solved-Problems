class Solution {
public:
    bool valid(double a, double b) {
        return fabs(a + b - 24.0) < 0.0001 or fabs(a - b - 24.0) < 0.0001 or
               fabs(a * b - 24.0) < 0.0001 or (b != 0 and fabs(a / b - 24.0) < 0.0001);
    }
    
    bool valid(double a, double b, double c) {
        return valid(a + b, c) or valid(a, b + c) or valid(a - b, c) or
               valid(a, b - c) or valid(a * b, c) or valid(a, b * c) or
               valid(a / b, c) or valid(a, b / c);
    }
    
    bool get_perm(int idx, vector<double>& cards) {
        if (idx == 4) {
            return valid(cards[0] + cards[1], cards[2], cards[3]) or
                   valid(cards[0], cards[1] + cards[2], cards[3]) or
                   valid(cards[0], cards[1], cards[2] + cards[3]) or
                   valid(cards[0] - cards[1], cards[2], cards[3]) or
                   valid(cards[0], cards[1] - cards[2], cards[3]) or
                   valid(cards[0], cards[1], cards[2] - cards[3]) or
                   valid(cards[0] * cards[1], cards[2], cards[3]) or
                   valid(cards[0], cards[1] * cards[2], cards[3]) or
                   valid(cards[0], cards[1], cards[2] * cards[3]) or
                   valid(cards[0] / cards[1], cards[2], cards[3]) or
                   valid(cards[0], cards[1] / cards[2], cards[3]) or
                   valid(cards[0], cards[1], cards[2] / cards[3]);
        }
        
        bool res = false;
        unordered_set<int> s;
        for (int i = idx; i < 4 and !res; i++) {
            if (s.count(cards[i]))
                continue;
            s.insert(cards[i]);
            swap(cards[idx], cards[i]);
            res |= get_perm(idx + 1, cards);
            swap(cards[idx], cards[i]);
        }
        return res;
    }
    
    bool judgePoint24(vector<int>& nums) {
        vector<double> cards;
        for (auto& x : nums)
            cards.push_back((double)x);
        return get_perm(0, cards);
    }
};
