// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 0 ; 
        long long int end = n ; 
        long long int minBadVersion ;
         
        while (start <= end)
        {
            long long int mid = (start + end) / 2 ; 

            if (isBadVersion(mid) == 1)
            {
                minBadVersion = mid ; 
                end = mid - 1 ; 
            }
            else
            {
                start = mid + 1 ; 
            }
        }
        return minBadVersion ;
    }
};
