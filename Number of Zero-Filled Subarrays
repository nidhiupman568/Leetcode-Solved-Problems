class Solution {
public:
    /**
     * Time Complexity: O(n) where n is the length of the nums array
     * - We iterate through the array once, performing constant time operations at each step
     * 
     * Space Complexity: O(1)
     * - We only use a constant amount of extra space (two variables) regardless of input size
     * - No additional data structures that scale with input
     */
    long long zeroFilledSubarray(vector<int>& nums) {
        long long contCount = 0;    // Count of continuous zeros in current sequence
        long long subarrays = 0;    // Total count of zero-filled subarrays
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                contCount++;   // Increment count of continuous zeros
            }
            else {
                // Calculate number of zero-filled subarrays for current sequence
                // For a sequence of length n, number of subarrays is n*(n+1)/2
                subarrays += (contCount * (contCount + 1) / 2);
                contCount = 0; // Reset continuous count
            }
        }
        
        // Handle the case where array ends with zeros
        if(contCount > 0) {
            subarrays += (contCount * (contCount + 1) / 2);
        }
        
        return subarrays;
    }
};
