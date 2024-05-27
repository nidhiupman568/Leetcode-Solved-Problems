class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        if(n <= nums[0])
            return n;

        int l = 1, r = n-1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(n-m <= nums[m]){
                if(n-m > nums[m-1])
                    return n-m;
                else
                    r = m-1;
            }
            else
                l = m+1;
        }
        return -1;
    }
};
