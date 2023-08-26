class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        
        for( int i = 1; i <= n ; i++){
            
            if( multipleOf(i, 3) && multipleOf(i, 5) ){
                result.emplace_back("FizzBuzz");
                
            }else if( multipleOf( i, 3) ){
                result.emplace_back("Fizz");
                
            }else if( multipleOf( i, 5) ){
                result.emplace_back("Buzz");
                
            }else{
                result.emplace_back( std::to_string(i) );
            }
        }
        
        return result;
    }
private:
    bool multipleOf(int i, int k){
        return i % k == 0;
    }
};
