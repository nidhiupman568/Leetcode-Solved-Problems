class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> results;
        
        // Set contents of all indices (minus 1) that appear in the array to be negative
        for (int i = 0; i < nums.size(); ++i)
        {
			// Note that we have to use the absolute value in the next 2 lines, to avoid trying to access a negative index in some cases
            if (nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
        }
        
        // A positive element means that the element (index + 1) does not appear in the array, so save it
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] > 0)
                results.push_back(i + 1);
        
        return results;
    }
};
