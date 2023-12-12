class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int first = 0, second = 0;
        
        for( const int& number: nums){
            
            if( number > first ){
                second = first;
                first = number;
                
            }else if( number > second ){
                second = number;
            }
            
        }
        
        return ( first - 1 ) * ( second - 1 );
    }
};
