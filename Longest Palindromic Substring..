class Solution {
public:
    string longestPalindrome(string s) {
        size_t len = s.size();

        if (len < 2) {
            return s;
        }
        size_t best_first = 0;
        size_t best_len = 0;
        for (size_t current = 0; current < len; ++current) {
            for (size_t offset = 1;
                current + offset < len && current >= offset && s[current - offset] == s[current + offset];
                ++offset) {
                if (offset * 2  > best_len) {
                    best_first = current - offset;
                    best_len = offset * 2;
                }
            }
            for (size_t offset = 1;
                current + offset - 1 < len && current >= offset && s[current - offset] == s[current + offset - 1];
                ++offset) {
                if (offset * 2 - 1 > best_len) {
                    best_first = current - offset;
                    best_len = offset * 2 - 1;
                }
            }
            if (best_len == len - 1) {
                break;
            }
        }
        return s.substr(best_first, best_len + 1);
    }
};
