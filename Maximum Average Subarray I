class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double m = 0, temp = 0;
        for(int i=0; i<k; i++) temp += (double)nums[i]; m = temp; 
        int start = 0, end = k; 
        while(end < nums.size()){
            temp += (double)nums[end] ; temp -= (double)nums[start]; 
            start++; end++; 
            if(m < temp) m = temp; 
        }

        return m/k; 



    }
};
