class Solution {
public:
    int heightChecker(vector<int>& height)
    {
        int last= height.size();
        
        vector <int> sorted;
        sorted = height;
        
        // cloning and sorting vector to compare with the original vector
        
        sort(sorted.begin(), sorted.end());
        int count=0;
        for(int i=0; i<last; i++)
        {
            if( height[i] != sorted[i] )
                count++;
        }
        return count;
    }
};
