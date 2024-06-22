class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int count=0;
        int result=0;
        int first_occur=0;
        vector<int>occur(nums.size(),0);
        int index=0;
        int current=0;
        // Variable window size problem
        while(j<nums.size())
        {
            // Do pre-calculation
            if(nums[j]%2!=0)
            {count++;
             occur[index++]=j;}
            // Play with condition
            if(count<k)
                j++;
            else
            {
              while(count>k)
              {
                  // remove calculation for i
                  if(nums[i]%2!=0)
                  {count--;current++;}
                  i++;
              }
                
                // Store result
                result+=occur[current]+1-i;
                j++;
            }
            
            
        }
        return result;
    }
};

Time Complexity: O(n)
Space Complexity: O(n)
