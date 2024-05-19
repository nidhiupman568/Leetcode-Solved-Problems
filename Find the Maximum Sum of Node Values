class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {

        long long sum1 = 0;
        long long sum2 = 0;
        int count = 0;
                
        for(auto i: nums) {
            // if the value of node can be increased with xor operation
            // then add it to sum1 and increase the count
            if((i ^ k) > i) {
                sum1 += (i ^ k);
                count++;
            }
            // else add it to sum2
            else
                sum2 += i;            
        }
            
        // if the count is even, we can pair each of the nodes
        // along their paths and increase the overall sum
        if(count % 2 == 0)
            return sum1 + sum2;
    
        // else we need to check a suitable inclusion from sum2 into sum1
        // or a suitable exclusion from sum1 into sum2
        long long maxi1 = 0;
        long long maxi2 = 0;                  
        for(auto i: nums) {
            // if value of the node can be increased with xor
            // try removing the value from sum1 and add it to sum2
            if((i ^ k) > i) 
                maxi1 = max(maxi1, sum1 - (i ^ k) + sum2 + i);    
            // else try removing the value from sum2 and add it to sum1
            else
                maxi2 = max(maxi2, sum1 + (i ^ k) + sum2 - i);                
        }

        return max(maxi1, maxi2);
    }
};
