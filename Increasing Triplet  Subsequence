class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int n = nums.size();
        
        // left_min[i] will store the minimum from left till ith

        vector<int> left_min(n);
        
        // right_max[i] will store the maximum from right till ith

        vector<int> right_max(n);
        
        // fill left_min array

        left_min[0] = nums[0];

        for(int i = 1; i < n; i++)
        {
            left_min[i] = min(left_min[i - 1], nums[i]);
        }
        
        // fill right_max array

        right_max[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(right_max[i + 1], nums[i]);
        }
        
        // check that is there any element which has smaller element on left side and greater element on right side

        for(int i = 1; i < n - 1; i++)
        {
            if(left_min[i - 1] < nums[i] && nums[i] < right_max[i + 1])
            {
                return true;
            }
        }
        
        return false;
    }
};
