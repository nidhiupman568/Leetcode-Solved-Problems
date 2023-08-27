class Solution {
public:
    int arrangeCoins(int n) {
        long long start = 0, end = n;
        long long mid = 0, total = 0;
        while (start <= end) {
            mid = start + (end - start) / 2;
            total = mid * (mid + 1) / 2;
            if (total == n)
                return static_cast<int>(mid);
            if (n < total)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return static_cast<int>(end);
    }
};
